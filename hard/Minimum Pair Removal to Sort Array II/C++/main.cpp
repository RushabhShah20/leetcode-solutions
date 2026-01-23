// Problem: Minimum Pair Removal to Sort Array II
// Link to the problem: https://leetcode.com/problems/minimum-pair-removal-to-sort-array-ii/
struct Node
{
    long long value;
    int id;
    bool removed = false;
    Node *prev = nullptr, *next = nullptr;
    Node(long long v, int i) : value(v), id(i) {}
};

struct Item
{
    Node *u, *v;
    long long sum;
    bool operator>(const Item &other) const
    {
        if (sum != other.sum)
            return sum > other.sum;
        return u->id > other.u->id;
    }
};

class Solution
{
public:
    int minimumPairRemoval(vector<int> &nums)
    {
        const int n = nums.size();
        if (n < 2)
        {
            return 0;
        }
        priority_queue<Item, vector<Item>, greater<Item>> pq;
        vector<Node *> nodeList;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            nodeList.push_back(new Node(nums[i], i));
            if (i > 0)
            {
                nodeList[i - 1]->next = nodeList[i];
                nodeList[i]->prev = nodeList[i - 1];
                pq.push({nodeList[i - 1], nodeList[i], (long long)nodeList[i - 1]->value + nodeList[i]->value});
                if (nodeList[i - 1]->value > nodeList[i]->value)
                {
                    x++;
                }
            }
        }
        int ans = 0;
        int nextId = n;
        while (x > 0 && !pq.empty())
        {
            Item top = pq.top();
            pq.pop();
            Node *u = top.u;
            Node *v = top.v;
            if (u->removed || v->removed || u->next != v)
            {
                continue;
            }
            ans++;
            if (u->prev && u->prev->value > u->value)
            {
                x--;
            }
            if (u->value > v->value)
            {
                x--;
            }
            if (v->next && v->value > v->next->value)
            {
                x--;
            }
            long long newSum = u->value + v->value;
            Node *newNode = new Node(newSum, u->id);
            Node *p = u->prev;
            Node *n_node = v->next;
            newNode->prev = p;
            newNode->next = n_node;
            if (p)
            {
                p->next = newNode;
            }
            if (n_node)
            {
                n_node->prev = newNode;
            }
            u->removed = true;
            v->removed = true;
            if (p)
            {
                if (p->value > newNode->value)
                {
                    x++;
                }
                pq.push({p, newNode, p->value + newNode->value});
            }
            if (n_node)
            {
                if (newNode->value > n_node->value)
                {
                    x++;
                }
                pq.push({newNode, n_node, newNode->value + n_node->value});
            }
        }
        return ans;
    }
};