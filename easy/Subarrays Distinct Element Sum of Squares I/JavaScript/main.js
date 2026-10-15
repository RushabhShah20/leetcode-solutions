// Problem: Subarrays Distinct Element Sum of Squares I
// Link to the problem: https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/
/**
 * @param {number[]} nums
 * @return {number}
 */
var sumCounts = function (nums) {
    const n = nums.length;
    let ans = 0;
    for (let i = 0; i < n; i++) {
        let s = new Set();
        for (let j = i; j < n; j++) {
            s.add(nums[j]);
            ans += s.size * s.size;
        }
    }
    return ans;
};