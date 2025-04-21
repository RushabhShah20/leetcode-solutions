// Problem: Check if Matrix Is X-Matrix
// Link to the problem: https://leetcode.com/problems/check-if-matrix-is-x-matrix/
class Solution {
    fun checkXMatrix(grid: Array<IntArray>): Boolean {
        for (i in 0 until grid.size)
        {
            for (j in 0 until grid[0].size)
            {
                if (i == j || i + j == (grid.size - 1))
                {
                    if (grid[i][j] == 0)
                    {
                        return false;
                    }
                }
                else
                {
                    if (grid[i][j] != 0)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
}