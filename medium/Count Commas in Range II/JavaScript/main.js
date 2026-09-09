// Problem: Count Commas in Range II
// Link to the problem: https://leetcode.com/problems/count-commas-in-range-ii/
/**
 * @param {number} n
 * @return {number}
 */
var countCommas = function (n) {
    let ans = 0, x = 1000;
    while (x <= n) {
        ans += (n - x + 1);
        x *= 1000;
    }
    return ans;
};