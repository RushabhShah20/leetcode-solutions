// Problem: Minimum Cost to Convert String I
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-convert-string-i/
class Solution
{
public:
    long long minimumCost(string source, string target, vector<char> &original, vector<char> &changed, vector<int> &cost)
    {
        const int o = original.size(), n = source.size();
        vector<vector<long long>> minCost(26, vector<long long>(26, LLONG_MAX));
        for (int i = 0; i < 26; i++)
        {
            minCost[i][i] = 0;
        }
        for (int i = 0; i < o; i++)
        {
            const int u = original[i] - 'a', v = changed[i] - 'a';
            minCost[u][v] = min(minCost[u][v], (long long)(cost[i]));
        }
        for (int k = 0; k < 26; k++)
        {
            for (int i = 0; i < 26; i++)
            {
                for (int j = 0; j < 26; j++)
                {
                    if (minCost[i][k] != LLONG_MAX && minCost[k][j] != LLONG_MAX)
                    {
                        minCost[i][j] = min(minCost[i][j], minCost[i][k] + minCost[k][j]);
                    }
                }
            }
        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (source[i] == target[i])
            {
                continue;
            }
            const int u = source[i] - 'a', v = target[i] - 'a';
            if (minCost[u][v] == LLONG_MAX)
            {
                return -1;
            }
            ans += minCost[u][v];
        }
        return ans;
    }
};