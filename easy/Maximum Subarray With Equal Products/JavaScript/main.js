// Problem: Maximum Subarray With Equal Products
// Link to the problem: https://leetcode.com/problems/maximum-subarray-with-equal-products/
/**
 * @param {number[]} nums
 * @return {number}
 */
var gcd = function (a, b) {
    return b === 0 ? a : gcd(b, a % b);
}
var maxLength = function (nums) {
    const n = nums.length;
    let ans = 2, x = 1, i = 0;
    for (let j = 0; j < n; j++) {
        while (gcd(x, nums[j]) > 1) {
            x /= nums[i];
            i++;
        }
        x *= nums[j];
        ans = Math.max(ans, j - i + 1);
    }
    return ans;
};