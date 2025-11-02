// Problem: Maximum Product of Three Elements After One Replacement
// Link to the problem: https://leetcode.com/problems/maximum-product-of-three-elements-after-one-replacement/
/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function (nums) {
    let n = nums.length;
    let ans = 1;
    nums.sort((a, b) => a - b);
    let a = nums[0], b = nums[1], c = nums[n - 2], d = nums[n - 1], x = 100000;
    let arr = [a * b * x, a * b * -x, a * c * x, a * c * -x, a * d * x, a * d * -x, b * c * x, b * c * -x, b * d * x, b * d * -x, c * d * x, c * d * -x];
    ans = Math.max(...arr);
    return ans;
};