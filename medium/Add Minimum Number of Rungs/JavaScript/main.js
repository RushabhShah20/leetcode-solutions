// Problem: Add Minimum Number of Rungs
// Link to the problem: https://leetcode.com/problems/add-minimum-number-of-rungs/
/**
 * @param {number[]} rungs
 * @param {number} dist
 * @return {number}
 */
var addRungs = function (rungs, dist) {
    let ans = 0, prev = 0;
    for (const rung of rungs) {
        if ((rung - prev) > dist) {
            if ((rung - prev) % dist === 0) {
                ans += (Math.floor((rung - prev) / dist) - 1);
            }
            else {
                ans += Math.floor((rung - prev) / dist);
            }
        }
        prev = rung;
    }
    return ans;
};