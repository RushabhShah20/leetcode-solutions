// Problem: Flip Square Submatrix Vertically
// Link to the problem: https://leetcode.com/problems/flip-square-submatrix-vertically/
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int **reverseSubmatrix(int **grid, int gridSize, int *gridColSize, int x, int y, int k, int *returnSize, int **returnColumnSizes)
{
    int **ans = (int **)malloc(gridSize * sizeof(int *));
    for (int i = 0; i < gridSize; i++)
    {
        ans[i] = (int *)malloc(gridColSize[0] * sizeof(int));
        memcpy(ans[i], grid[i], gridColSize[0] * sizeof(int));
    }
    for (int i = x; i < x + (k + 1) / 2; i++)
    {
        for (int j = y; j < y + k; j++)
        {
            int temp = ans[i][j];
            ans[i][j] = ans[2 * x + k - i - 1][j];
            ans[2 * x + k - i - 1][j] = temp;
        }
    }
    *returnSize = gridSize;
    *returnColumnSizes = gridColSize;
    return ans;
}