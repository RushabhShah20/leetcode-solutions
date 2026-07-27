// Problem: Maximum Product of Two Elements in an Array
// Link to the problem: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function (nums) {
    const n = nums.length;
    let x = 0, y = 0;
    for (let i = 0; i < n; i++) {
        if (nums[i] > x) {
            y = x;
            x = nums[i];
        }
        else if (nums[i] > y) {
            y = nums[i];
        }
    }
    const ans = (x - 1) * (y - 1);
    return ans;
};