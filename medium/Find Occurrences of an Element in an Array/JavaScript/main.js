// Problem: Find Occurrences of an Element in an Array
// Link to the problem: https://leetcode.com/problems/find-occurrences-of-an-element-in-an-array/
/**
 * @param {number[]} nums
 * @param {number[]} queries
 * @param {number} x
 * @return {number[]}
 */
var occurrencesOfElement = function (nums, queries, x) {
    let ans = new Array(queries.length).fill(-1);
    let freq = [];
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] == x) {
            freq.push(i);
        }
    }
    for (let i = 0; i < ans.length; i++) {
        if (queries[i] <= freq.length) {
            ans[i] = freq[queries[i] - 1];
        }
    }
    return ans;
};
