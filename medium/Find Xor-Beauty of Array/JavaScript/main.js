// Problem: Find Xor-Beauty of Array
// Link to the problem: https://leetcode.com/problems/find-xor-beauty-of-array/
/**
 * @param {number[]} nums
 * @return {number}
 */
var xorBeauty = function (nums) {
    let ans = 0;
    for (const num of nums) {
        ans ^= num;
    }
    return ans;
};