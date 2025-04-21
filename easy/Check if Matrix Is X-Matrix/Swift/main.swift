// Problem: Check if Matrix Is X-Matrix
// Link to the problem: https://leetcode.com/problems/check-if-matrix-is-x-matrix/
class Solution {
    func checkXMatrix(_ grid: [[Int]]) -> Bool {
        for i in (0..<grid.count)
        {
            for j in (0..<grid.count)
            {
                if (i == j || i + j == (grid.count - 1))
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