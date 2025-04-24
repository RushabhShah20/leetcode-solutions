// Problem: Partition Array According to Given Pivot
// Link to the problem: https://leetcode.com/problems/partition-array-according-to-given-pivot/
/**
 * @param {number[]} nums
 * @param {number} pivot
 * @return {number[]}
 */
var pivotArray = function (nums, pivot) {
    let ans = [], less = [], equal = [], greater = [];
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] < pivot) {
            less.push(nums[i]);
        }
        else if (nums[i] > pivot) {
            greater.push(nums[i]);
        }
        else {
            equal.push(nums[i]);
        }
    }
    ans.push(...less);
    ans.push(...equal);
    ans.push(...greater);
    return ans;
};