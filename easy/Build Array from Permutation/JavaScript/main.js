// Problem: Build Array from Permutation
// Link to the problem: https://leetcode.com/problems/build-array-from-permutation/
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var buildArray = function (nums) {
    let ans = new Array(nums.length);
    ans[0] = nums[nums[0]];
    for (let i = 0; i < nums.length; i++) {
        ans[i] = nums[nums[i]];
    }
    return ans;
};