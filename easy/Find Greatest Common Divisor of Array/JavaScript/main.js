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
    let maxVal = 0, minVal = 1001;
    for (const num of nums) {
        maxVal = Math.max(maxVal, num);
        minVal = Math.min(minVal, num);
    }
    const ans = gcd(maxVal, minVal);
    return ans;
};