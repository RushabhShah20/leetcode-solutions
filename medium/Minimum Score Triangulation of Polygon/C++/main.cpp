// Problem: Minimum Score Triangulation of Polygon
// Link to the problem: https://leetcode.com/problems/minimum-score-triangulation-of-polygon/
class Solution
{
public:
    int minScoreTriangulation(vector<int> &values)
    {
        int n = values.size();
        if (n == 3)
        {
            return values[0] * values[1] * values[2];
        }
        vector<vector<int>> dp(n - 1, vector<int>(n, 0));
        for (int x = 2; x <= n - 1; x++)
        {
            for (int i = 0; i < n - x; i++)
            {
                int j = i + x;
                int w = INT_MAX, e = values[i] * values[j];
                for (int k = i + 1; k < j; k++)
                {
                    w = min(w, e * values[k] + dp[i][k] + dp[k][j]);
                }
                dp[i][j] = w;
            }
        }
        return dp[0][n - 1];
    }
};