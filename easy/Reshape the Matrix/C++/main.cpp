// Problem: Reshape the Matrix
// Link to the problem: https://leetcode.com/problems/reshape-the-matrix/description/
class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {
        const int n = mat.size(), m = mat[0].size();
        vector<vector<int>> ans(r, vector<int>(c));
        if (r * c != n * m)
        {
            return mat;
        }
        int j = 0;
        for (int i = 0; i < n * m; i++)
        {
            ans[j / c][j % c] = mat[i / m][i % m];
            j++;
        }
        return ans;
    }
};