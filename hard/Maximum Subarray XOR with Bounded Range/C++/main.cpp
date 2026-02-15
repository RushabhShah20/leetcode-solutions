// Problem: Maximum Subarray XOR with Bounded Range
// Link to the problem: https://leetcode.com/problems/maximum-subarray-xor-with-bounded-range/
class Solution
{
public:
    static constexpr int m = 600005;
    int trie[m][2];
    int count[m];
    int p;
    void build()
    {
        p = 1;
        for (int i = 0; i < m; i++)
        {
            trie[i][0] = trie[i][1] = 0;
            count[i] = 0;
        }
    }
    void insert(const int x)
    {
        int y = 0;
        for (int i = 14; i >= 0; i--)
        {
            const int z = (x >> i) & 1;
            if (!trie[y][z])
            {
                trie[y][z] = p++;
            }
            y = trie[y][z];
            count[y]++;
        }
    }
    void remove(const int x)
    {
        int y = 0;
        for (int i = 14; i >= 0; i--)
        {
            const int z = (x >> i) & 1;
            y = trie[y][z];
            count[y]--;
        }
    }
    int query(const int x)

    {
        int ans = 0, y = 0;
        for (int i = 14; i >= 0; i--)
        {
            const int z = (x >> i) & 1, w = z ^ 1;
            if (trie[y][w] && count[trie[y][w]] > 0)
            {
                ans |= (1 << i);
                y = trie[y][w];
            }
            else
            {
                y = trie[y][z];
            }
        }
        return ans;
    }
    int maxXor(vector<int> &nums, int k)
    {
        const int n = nums.size();
        build();
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] ^ nums[i];
        }
        deque<int> maxDQ, minDQ;
        int ans = 0, i = 0;
        for (int j = 0; j < n; j++)
        {
            while (!maxDQ.empty() && nums[maxDQ.back()] <= nums[j])
            {
                maxDQ.pop_back();
            }
            maxDQ.push_back(j);
            while (!minDQ.empty() && nums[minDQ.back()] >= nums[j])
            {
                minDQ.pop_back();
            }
            minDQ.push_back(j);
            insert(prefix[j]);
            while (nums[maxDQ.front()] - nums[minDQ.front()] > k)
            {
                remove(prefix[i]);
                i++;
                if (maxDQ.front() < i)
                {
                    maxDQ.pop_front();
                }
                if (minDQ.front() < i)
                {
                    minDQ.pop_front();
                }
            }
            ans = max(ans, query(prefix[j + 1]));
        }
        return ans;
    }
};