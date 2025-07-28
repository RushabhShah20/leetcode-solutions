// Problem: Convert 1D Array Into 2D Array
// Link to the problem: https://leetcode.com/problems/convert-1d-array-into-2d-array/
class Solution
{
public:
    vector<vector<int>> construct2DArray(vector<int> &original, int m, int n)
    {
        if ((m * n) != original.size())
        {
            return {};
        }
        else
        {
            vector<vector<int>> ans(m, vector<int>(n, 0));
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    ans[i][j] = (original[(n * i) + j]);
                }
            }
            return ans;
        }
    }
};