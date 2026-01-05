// Problem: Projection Area of 3D Shapes
// Link to the problem: https://leetcode.com/problems/projection-area-of-3d-shapes/
/**
 * @param {number[][]} grid
 * @return {number}
 */
var projectionArea = function (grid) {
    const n = grid.length;
    let ans = 0;
    for (let i = 0; i < n; i++) {
        let a = 0, b = 0;
        for (let j = 0; j < n; j++)
        {
            a = Math.max(a, grid[i][j]);
            b = Math.max(b, grid[j][i]);
            if (grid[i][j] > 0) {
                ans++;
            }
        }
        ans += (a + b);
    }
    return ans;
};