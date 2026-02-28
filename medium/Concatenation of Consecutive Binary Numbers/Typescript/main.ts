// Problem: Concatenation of Consecutive Binary Numbers
// Link to the problem: https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers/
function concatenatedBinary(n: number): number {
    const mod: number = 1000000007;
    let ans: number = 0;
    for (let i = 1; i <= n; i++) {
        let x: number = i;
        while (x > 0) {
            x = Math.floor(x / 2);
            ans *= 2;
        }
        ans = (ans + i) % mod;
    }
    return ans;
};