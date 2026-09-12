// Problem: Maximum Score of Non-overlapping Intervals
// Link to the problem: https://leetcode.com/problems/maximum-score-of-non-overlapping-intervals/
class Solution
{
public:
    vector<int> maximumWeight(vector<vector<int>> &intervals)
    {
        int n = intervals.size();
        vector<vector<int>> a;
        for (int i = 0; i < n; i++)
        {
            a.push_back({intervals[i][0], intervals[i][1], intervals[i][2], i});
        }
        sort(a.begin(), a.end(), [](auto &&x, auto &&y)
             { return x[1] < y[1]; });
        vector<vector<long long>> dp(n + 1, vector<long long>(5));
        vector<vector<vector<int>>> b(n + 1, vector<vector<int>>(5));
        for (int i = 0; i < n; i++)
        {
            vector<int> x = a[i];
            const int k = lower_bound(a.begin(), a.begin() + i, x[0], [](const vector<int> &t, int val)
                                      { return t[1] < val; }) -
                          a.begin();
            for (int j = 1; j < 5; j++)
            {
                const long long s1 = dp[i][j], s2 = dp[k][j - 1] + x[2];
                if (s1 > s2)
                {
                    dp[i + 1][j] = dp[i][j];
                    b[i + 1][j] = b[i][j];
                    continue;
                }
                vector<int> y = b[k][j - 1];
                y.push_back(x[3]);
                sort(y.begin(), y.end());
                if (s1 == s2 && b[i][j] < y)
                {
                    y = b[i][j];
                }
                dp[i + 1][j] = s2;
                b[i + 1][j] = y;
            }
        }
        const vector<int> ans = b[n][4];
        return ans;
    }
};