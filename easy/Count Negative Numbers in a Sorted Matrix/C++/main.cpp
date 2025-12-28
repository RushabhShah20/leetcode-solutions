// Problem: Count Negative Numbers in a Sorted Matrix
// Link to the problem: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        const int m = grid.size(), n = grid[0].size();
        int ans = 0, i = m - 1, j = 0;
        while (i >= 0 && j < n)
        {
            if (grid[i][j] < 0)
            {
                ans += (n - j);
                i--;
            }
            else
            {
                j++;
            }
        }
        return ans;
    }
};