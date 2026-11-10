// Problem: Climbing Stairs II
// Link to the problem: https://leetcode.com/problems/climbing-stairs-ii/
function climbStairs(n: number, costs: number[]): number {
    let a: number = 0, b: number = 0, c: number = 0;
    for (let i = 0; i < n; i++) {
        const d: number = Math.min(a + 9, Math.min(b + 4, c + 1)) + costs[i];
        a = b;
        b = c;
        c = d;
    }
    const ans: number = c;
    return ans;
};