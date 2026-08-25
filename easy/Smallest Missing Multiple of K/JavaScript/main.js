// Problem: Smallest Missing Multiple of K
// Link to the problem: https://leetcode.com/problems/smallest-missing-multiple-of-k/
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var missingMultiple = function (nums, k) {
    const n = nums.length;
    let s = new Set();
    for (let i = 0; i < n; i++) {
        s.add(nums[i]);
    }
    let ans = k;
    while (s.has(ans)) {
        ans += k;
    }
    return ans;
};