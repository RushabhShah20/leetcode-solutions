// Problem: Maximum Side Length of a Square with Sum Less than or Equal to Threshold
// Link to the problem: https://leetcode.com/problems/maximum-side-length-of-a-square-with-sum-less-than-or-equal-to-threshold/
class Solution
{
public:
    int maxSideLength(vector<vector<int>> &mat, int threshold)
    {
        const int m = mat.size(), n = mat[0].size(), l = min(m, n);
        vector<vector<int>> prefix(m + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + mat[i - 1][j - 1];
            }
        }
        int ans = 0;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                for (int k = ans + 1; k <= l; k++)
                {
                    if (i + k - 1 <= m && j + k - 1 <= n)
                    {
                        const int sum = prefix[i + k - 1][j + k - 1] - prefix[i - 1][j + k - 1] - prefix[i + k - 1][j - 1] + prefix[i - 1][j - 1];
                        if (sum <= threshold)
                        {
                            ans++;
                        }
                        else
                        {
                            break;
                        }
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        return ans;
    }
};