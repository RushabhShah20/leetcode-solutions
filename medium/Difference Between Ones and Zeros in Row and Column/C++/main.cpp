// Problem: Difference Between Ones and Zeros in Row and Column
// Link to the problem: https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column/
class Solution
{
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>> &grid)
    {
        vector<vector<int>> diff(grid.size(), vector<int>(grid[0].size(), 0));
        vector<int> onesRow(grid.size(), 0), onesCol(grid[0].size(), 0), zerosRow(grid.size(), 0), zerosCol(grid[0].size(), 0);
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 0)
                {
                    zerosRow[i]++;
                    zerosCol[j]++;
                }
                if (grid[i][j] == 1)
                {
                    onesRow[i]++;
                    onesCol[j]++;
                }
            }
        }
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                diff[i][j] = onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j];
            }
        }
        return diff;
    }
};