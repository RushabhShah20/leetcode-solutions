// Problem: Minimum Cost to Merge Sorted Lists
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-merge-sorted-lists/
class Solution
{
public:
    long long median[1 << 12], size[1 << 12];
    void findMedian(int a, vector<vector<int>> &lists)
    {
        vector<int> v;
        const int n = lists.size();
        for (int i = 0; i < n; i++)
        {
            if (a & (1 << i))
            {
                for (const int j : lists[i])
                {
                    v.push_back(j);
                }
            }
        }
        sort(v.begin(), v.end());
        size[a] = v.size();
        median[a] = v[(v.size() - 1) / 2];
        return;
    }
    long long minMergeCost(vector<vector<int>> &lists)
    {
        const int n = lists.size(), m = (1LL << 12);
        vector<long long> dp(m);
        for (int i = 0; i < m; i++)
        {
            dp[i] = 1e15;
        }
        for (int i = 0; i < n; i++)
        {
            dp[1 << i] = 0;
        }
        for (int i = 1; i < (1 << n); i++)
        {
            findMedian(i, lists);
        }
        for (int i = 1; i < (1 << n); i++)
        {
            for (int j = 1; j < i; j++)
            {
                if (((j | i) == i) && (j < (i ^ j)))
                {
                    dp[i] = min(dp[i], dp[j] + dp[i ^ j] + size[j] + size[i ^ j] + abs(median[j] - median[i ^ j]));
                }
            }
        }
        return dp[(1 << n) - 1];
    }
};