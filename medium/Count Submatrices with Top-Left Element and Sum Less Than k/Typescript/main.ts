// Problem: Count Submatrices with Top-Left Element and Sum Less Than k
// Link to the problem: https://leetcode.com/problems/count-submatrices-with-top-left-element-and-sum-less-than-k/
function countSubmatrices(grid: number[][], k: number): number {
    const m: number = grid.length, n: number = grid[0].length;
    let prefix: number[][] = Array.from({ length: m + 1 }, () => new Array(n + 1).fill(0));
    for (let i = 1; i <= m; i++) {
        for (let j = 1; j <= n; j++) {
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + grid[i - 1][j - 1];
        }
    }
    let ans: number = 0;
    for (let i = 1; i <= m; i++) {
        for (let j = 1; j <= n; j++) {
            if (prefix[i][j] <= k) {
                ans++;
            }
        }
    }
    return ans;
};