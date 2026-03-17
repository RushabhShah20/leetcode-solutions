// Problem: Largest Submatrix With Rearrangements
// Link to the problem: https://leetcode.com/problems/largest-submatrix-with-rearrangements/
class Solution
{
public:
    int largestSubmatrix(vector<vector<int>> &matrix)
    {
        const int m = matrix.size(), n = matrix[0].size();
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] != 0 && i > 0)
                {
                    matrix[i][j] += matrix[i - 1][j];
                }
            }
            vector<int> a = matrix[i];
            sort(a.begin(), a.end(), greater<>());
            for (int j = 0; j < n; j++)
            {
                ans = max(ans, a[j] * (j + 1));
            }
        }
        return ans;
    }
};