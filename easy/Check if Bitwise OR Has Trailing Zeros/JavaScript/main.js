// Problem: Check if Bitwise OR Has Trailing Zeros
// Link to the problem: https://leetcode.com/problems/check-if-bitwise-or-has-trailing-zeros/
/**
 * @param {number[]} nums
 * @return {boolean}
 */
var hasTrailingZeros = function (nums) {
    let count = 0;
    for (const num of nums) {
        if (num % 2 === 0) {
            count++;
        }
        if (count === 2) {
            return true;
        }
    }
    return false;
};