// Problem: Find the Highest Altitude
// Link to the problem: https://leetcode.com/problems/find-the-highest-altitude/
function largestAltitude(gain: number[]): number {
    const n: number = gain.length;
    let ans: number = 0, x: number = 0;
    for (let i = 0; i < n; i++) {
        x += gain[i];
        ans = Math.max(ans, x);
    }
    return ans;
};