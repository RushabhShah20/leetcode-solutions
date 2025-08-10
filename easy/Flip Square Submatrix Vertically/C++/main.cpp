// Problem: Flip Square Submatrix Vertically
// Link to the problem: https://leetcode.com/problems/flip-square-submatrix-vertically/
class Solution
{
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>> &grid, int x, int y, int k)
    {
        vector<vector<int>> ans = grid;
        int m = grid.size(), n = grid[0].size();
        for (int i = x; i < x + (k + 1) / 2; i++)
        {
            for (int j = y; j < (y + k); j++)
            {
                int temp = ans[i][j];
                ans[i][j] = ans[2 * x + k - i - 1][j];
                ans[2 * x + k - i - 1][j] = temp;
            }
        }
        return ans;
    }
};