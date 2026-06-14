// Problem: Maximize Sum of Device Ratings
// Link to the problem: https://leetcode.com/problems/maximize-sum-of-device-ratings/
class Solution
{
public:
    long long maxRatings(vector<vector<int>> &units)
    {
        const int m = units.size(), n = units[0].size();
        long long mn = INT_MAX, y = INT_MAX, a = 0, b = 0;
        for (int i = 0; i < m; i++)
        {
            int mn1 = INT_MAX, mn2 = INT_MAX;
            for (int j = 0; j < n; j++)
            {
                const int x = units[i][j];
                if (x < mn1)
                {
                    mn2 = mn1;
                    mn1 = x;
                }
                else if (x < mn2)
                {
                    mn2 = x;
                }
            }
            if (n == 1)
            {
                mn2 = 0;
            }
            b += mn1;
            if (mn1 < mn)
            {
                mn = mn1;
            }
            a += mn2;
            if (mn2 < y)
            {
                y = mn2;
            }
        }
        const long long d = mn + a - y, ans = max(b, d);
        return ans;
    }
};