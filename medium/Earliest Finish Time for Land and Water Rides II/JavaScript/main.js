// Problem: Earliest Finish Time for Land and Water Rides II
// Link to the problem: https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-ii/
/**
 * @param {number[]} landStartTime
 * @param {number[]} landDuration
 * @param {number[]} waterStartTime
 * @param {number[]} waterDuration
 * @return {number}
 */
var solve = function (n, m, a1, d1, a2, d2) {
    let x = Number.MAX_SAFE_INTEGER;
    for (let i = 0; i < n; i++) {
        x = Math.min(x, a1[i] + d1[i]);
    }
    let y = Number.MAX_SAFE_INTEGER;
    for (let i = 0; i < m; i++) {
        y = Math.min(y, Math.max(a2[i], x) + d2[i]);
    }
    return y;
}
var earliestFinishTime = function (landStartTime, landDuration, waterStartTime, waterDuration) {
    const n = landDuration.length, m = waterDuration.length;
    const x = solve(n, m, landStartTime, landDuration, waterStartTime, waterDuration);
    const y = solve(m, n, waterStartTime, waterDuration, landStartTime, landDuration);
    const ans = Math.min(x, y);
    return ans;
};