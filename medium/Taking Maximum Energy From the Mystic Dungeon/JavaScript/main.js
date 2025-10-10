// Problem: Taking Maximum Energy From the Mystic Dungeon
// Link to the problem: https://leetcode.com/problems/taking-maximum-energy-from-the-mystic-dungeon/
/**
 * @param {number[]} energy
 * @param {number} k
 * @return {number}
 */
var maximumEnergy = function (energy, k) {
    let n = energy.length, ans = Number.MIN_SAFE_INTEGER;
    let dp = new Array(n).fill(0);
    for (let i = n - 1; i >= 0; i--) {
        if (i >= n - k) {
            dp[i] = energy[i];
        }
        else {
            dp[i] = energy[i] + dp[i + k];
        }
        ans = Math.max(ans, dp[i]);
    }
    return ans;
};