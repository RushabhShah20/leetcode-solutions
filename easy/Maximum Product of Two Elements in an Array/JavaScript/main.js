// Problem: Maximum Product of Two Elements in an Array
// Link to the problem: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function (nums) {
    let x = 0, y = 0;
    for (const num of nums) {
        if (num > x) {
            y = x;
            x = num;
        }
        else if (num > y) {
            y = num;
        }
    }
    const ans = (x - 1) * (y - 1);
    return ans;
};