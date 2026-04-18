// Problem: Mirror Distance of an Integer
// Link to the problem: https://leetcode.com/problems/mirror-distance-of-an-integer/
/**
 * @param {number} n
 * @return {number}
 */
var rev = function (n) {
    let ans = 0;
    while (n > 0) {
        ans = ans * 10 + n % 10;
        n = Math.floor(n / 10);
    }
    return ans;
}
var mirrorDistance = function (n) {
    const m = rev(n), ans = Math.abs(m - n);
    return ans;
};