// Problem: Count Negative Numbers in a Sorted Matrix
// Link to the problem: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
function countNegatives(grid: number[][]): number {
    const m: number = grid.length, n: number = grid[0].length;
    let ans: number = 0, i: number = m - 1, j: number = 0;
    while (i >= 0 && j < n) {
        if (grid[i][j] < 0) {
            ans += (n - j);
            i--;
        }
        else {
            j++;
        }
    }
    return ans;
};