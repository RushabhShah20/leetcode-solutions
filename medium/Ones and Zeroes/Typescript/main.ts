// Problem: Ones and Zeroes
// Link to the problem: https://leetcode.com/problems/ones-and-zeroes/
function findMaxForm(strs: string[], m: number, n: number): number {
    let dp: number[][] = Array.from({ length: m + 1 }, () => new Array(n + 1).fill(0));
    for (const str of strs) {
        let zeroes: number = 0, ones: number = 0;
        for (const ch of str) {
            if (ch === '0') {
                zeroes++;
            }
            else {
                ones++;
            }
        }
        for (let i = m; i >= zeroes; i--) {
            for (let j = n; j >= ones; j--) {
                dp[i][j] = Math.max(dp[i][j], 1 + dp[i - zeroes][j - ones]);
            }
        }
    }
    return dp[m][n];
};