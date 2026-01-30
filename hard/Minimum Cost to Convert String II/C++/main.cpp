// Problem: Minimum Cost to Convert String II
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-convert-string-ii/
class Solution
{
    struct Node
    {
        Node *next[26];
        int id = -1;
        Node() { fill(begin(next), end(next), nullptr); }
    };
    vector<Node *> nodes;
    int insert(Node *root, const string &s)
    {
        Node *curr = root;
        for (const char &c : s)
        {
            if (!curr->next[c - 'a'])
            {
                curr->next[c - 'a'] = new Node();
            }
            curr = curr->next[c - 'a'];
        }
        if (curr->id == -1)
        {
            curr->id = nodes.size();
            nodes.push_back(curr);
        }
        return curr->id;
    }

public:
    long long minimumCost(string source, string target, vector<string> &original, vector<string> &changed, vector<int> &cost)
    {
        const long long inf = 1e14, k = original.size(), n = source.size();
        Node *root = new Node();
        for (const string &s : original)
        {
            insert(root, s);
        }
        for (const string &s : changed)
        {
            insert(root, s);
        }
        const int m = nodes.size();
        vector<vector<long long>> dist(m, vector<long long>(m, inf));
        for (int i = 0; i < m; i++)
        {
            dist[i][i] = 0;
        }
        for (int i = 0; i < k; i++)
        {
            const int u = insert(root, original[i]), v = insert(root, changed[i]);
            dist[u][v] = min(dist[u][v], (long long)(cost[i]));
        }
        for (int p = 0; p < m; p++)
        {
            for (int i = 0; i < m; i++)
            {
                if (dist[i][p] < inf)
                {
                    for (int j = 0; j < m; j++)
                    {
                        dist[i][j] = min(dist[i][j], dist[i][p] + dist[p][j]);
                    }
                }
            }
        }
        vector<long long> dp(n + 1, inf);
        dp[0] = 0;
        for (int i = 0; i < n; i++)
        {
            if (dp[i] == inf)
            {
                continue;
            }
            if (source[i] == target[i])
            {
                dp[i + 1] = min(dp[i + 1], dp[i]);
            }
            const Node *p = root, *q = root;
            for (int j = i; j < n; j++)
            {
                if (!p->next[source[j] - 'a'] || !q->next[target[j] - 'a'])
                {
                    break;
                }
                p = p->next[source[j] - 'a'];
                q = q->next[target[j] - 'a'];
                if (p->id != -1 && q->id != -1)
                {
                    if (dist[p->id][q->id] < inf)
                    {
                        dp[j + 1] = min(dp[j + 1], dp[i] + dist[p->id][q->id]);
                    }
                }
            }
        }
        if (dp[n] == inf)
        {
            return -1;
        }
        return dp[n];
    }
};