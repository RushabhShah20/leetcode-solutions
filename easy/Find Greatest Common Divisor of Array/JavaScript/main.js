// Problem: Find Greatest Common Divisor of Array
// Link to the problem: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
/**
 * @param {number[]} nums
 * @return {number}
 */
var gcd = function (a, b) {
    return b === 0 ? a : gcd(b, a % b);
};
var findGCD = function (nums) {
    const n = nums.length;
    let mx = 0, mn = 1001;
    for (let i = 0; i < n; i++) {
        mx = Math.max(mx, nums[i]);
        mn = Math.min(mn, nums[i]);
    }
    const ans = gcd(mx, mn);
    return ans;
};