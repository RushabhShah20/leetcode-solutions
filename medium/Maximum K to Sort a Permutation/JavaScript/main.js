// Problem: Maximum K to Sort a Permutation
// Link to the problem: https://leetcode.com/problems/maximum-k-to-sort-a-permutation/
/**
 * @param {number[]} nums
 * @return {number}
 */
var sortPermutation = function (nums) {
    const n = nums.length;
    let ans = -1;
    for (let i = 0; i < n; i++) {
        if (nums[i] !== i) {
            ans &= nums[i];
        }
    }
    if (ans === -1) {
        return 0;
    }
    else {
        return ans;
    }
};