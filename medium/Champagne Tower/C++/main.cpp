// Problem: Champagne Tower
// Link to the problem: https://leetcode.com/problems/champagne-tower/
class Solution
{
public:
    double champagneTower(int poured, int query_row, int query_glass)
    {
        vector<vector<double>> a(102, vector<double>(102, 0.0));
        a[0][0] = poured;
        for (int i = 0; i <= query_row; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                const double x = (a[i][j] - 1.0) / 2.0;
                if (x > 0)
                {
                    a[i + 1][j] += x;
                    a[i + 1][j + 1] += x;
                }
            }
        }
        const double ans = min(1.0, a[query_row][query_glass]);
        return ans;
    }
};