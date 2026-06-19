// Problem: Find the Highest Altitude
// Link to the problem: https://leetcode.com/problems/find-the-highest-altitude/
/**
 * @param {number[]} gain
 * @return {number}
 */
var largestAltitude = function (gain) {
    const n = gain.length;
    let ans = 0, x = 0;
    for (let i = 0; i < n; i++) {
        x += gain[i];
        ans = Math.max(ans, x);
    }
    return ans;
};