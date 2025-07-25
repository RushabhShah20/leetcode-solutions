// Problem: Sign of the Product of an Array
// Link to the problem: https://leetcode.com/problems/sign-of-the-product-of-an-array/
/**
 * @param {number[]} nums
 * @return {number}
 */
var arraySign = function (nums) {
    let sign = 1;
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] === 0) return 0;
        else if (nums[i] < 0) sign *= -1;
    }
    return sign;
};
