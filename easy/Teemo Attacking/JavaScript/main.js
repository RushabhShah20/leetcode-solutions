// Problem: Teemo Attacking
// Link to the problem: https://leetcode.com/problems/teemo-attacking/
/**
 * @param {number[]} timeSeries
 * @param {number} duration
 * @return {number}
 */
var findPoisonedDuration = function (timeSeries, duration) {
    let ans = 0, n = timeSeries.length;
    for (let i = 1; i < n; i++) {
        ans += Math.min(duration, timeSeries[i] - timeSeries[i - 1]);
    }
    ans += duration;
    return ans;
};