// Problem: Find Target Indices After Sorting Array
// Link to the problem: https://leetcode.com/problems/find-target-indices-after-sorting-array/
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var targetIndices = function (nums, target) {
    const n = nums.length;
    let x = 0, y = 0;
    for (let i = 0; i < n; i++) {
        if (nums[i] < target) {
            x++;
        }
        else if (nums[i] === target) {
            y++;
        }
    }
    let ans = new Array();
    for (let i = x; i < x + y; i++) {
        ans.push(i);
    }
    return ans;
};