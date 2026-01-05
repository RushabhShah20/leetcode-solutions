// Problem: Projection Area of 3D Shapes
// Link to the problem: https://leetcode.com/problems/projection-area-of-3d-shapes/
int projectionArea(int **grid, int gridSize, int *gridColSize)
{
    const int n = gridSize;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a = 0, b = 0;
        for (int j = 0; j < n; j++)
        {
            a = fmax(a, grid[i][j]);
            b = fmax(b, grid[j][i]);
            if (grid[i][j] > 0)
            {
                ans++;
            }
        }
        ans += (a + b);
    }
    return ans;
}