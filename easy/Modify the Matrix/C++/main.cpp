// Problem: Modify the Matrix
// Link to the problem: https://leetcode.com/problems/modify-the-matrix/
class Solution
{
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>> &matrix)
    {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> maxofCols(n, 0);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                maxofCols[j] = max(maxofCols[j], matrix[i][j]);
            }
        }
        vector<vector<int>> ans = matrix;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == -1)
                {
                    ans[i][j] = maxofCols[j];
                }
            }
        }
        return ans;
    }
};