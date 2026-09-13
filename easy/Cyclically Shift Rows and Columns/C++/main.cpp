// Problem: Cyclically Shift Rows and Columns
// Link to the problem: https://leetcode.com/problems/cyclically-shift-rows-and-columns/
class Solution
{
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>> &grid, vector<int> &rowShift, vector<int> &colShift)
    {
        vector<vector<int>> a(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            const int k = rowShift[i];
            for (int j = 0; j < n; j++)
            {
                a[i][j] = grid[i][(j + k) % n];
            }
        }
        for (int j = 0; j < n; j++)
        {
            const int k = colShift[j];
            for (int i = 0; i < n; i++)
            {
                grid[i][j] = a[(i + k) % n][j];
            }
        }
        return grid;
    }
};