// Problem: Number of Ways to Paint N × 3 Grid
// Link to the problem: https://leetcode.com/problems/number-of-ways-to-paint-n-3-grid/
function numOfWays(n: number): number {
    const mod: number = 1000000007;
    let a = 6, b = 6;
    for (let i = 1; i < n; i++) {
        const x: number = ((3 * a) + (2 * b)) % mod;
        const y: number = ((2 * a) + (2 * b)) % mod;
        a = x;
        b = y;
    }
    const ans: number = (a + b) % mod;
    return ans;
};