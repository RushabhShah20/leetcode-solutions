// Problem: Find Triangular Sum of an Array
// Link to the problem: https://leetcode.com/problems/find-triangular-sum-of-an-array/
/**
 * @param {number[]} nums
 * @return {number}
 */
var triangularSum = function (nums) {
    let n = nums.length;
    for (let i = n - 1; i >= 0; i--) {
        for (let j = 0; j < i; j++) {
            nums[j] = ((nums[j] + nums[j + 1]) % 10);
        }
    }
    return nums[0];
};