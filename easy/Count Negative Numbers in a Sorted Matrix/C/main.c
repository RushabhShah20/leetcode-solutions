// Problem: Count Negative Numbers in a Sorted Matrix
// Link to the problem: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
int countNegatives(int **grid, int gridSize, int *gridColSize)
{
    const int m = gridSize, n = gridColSize[0];
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