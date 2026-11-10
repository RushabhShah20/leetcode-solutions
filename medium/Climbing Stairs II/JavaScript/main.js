// Problem: Climbing Stairs II
// Link to the problem: https://leetcode.com/problems/climbing-stairs-ii/
/**
 * @param {number} n
 * @param {number[]} costs
 * @return {number}
 */
var climbStairs = function (n, costs) {
    let a = 0, b = 0, c = 0;
    for (let i = 0; i < n; i++) {
        const d = Math.min(a + 9, Math.min(b + 4, c + 1)) + costs[i];
        a = b;
        b = c;
        c = d;
    }
    const ans = c;
    return ans;
};