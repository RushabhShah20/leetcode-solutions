// Problem: Sum of Squares of Special Elements
// Link to the problem: https://leetcode.com/problems/sum-of-squares-of-special-elements/
/**
 * @param {number[]} nums
 * @return {number}
 */
var sumOfSquares = function (nums) {
    let ans = 0;
    for (let i = 0; i < nums.length; i++) {
        if (nums.length % (i + 1) == 0) {
            ans += nums[i] * nums[i];
        }
    }
    return ans;
};
