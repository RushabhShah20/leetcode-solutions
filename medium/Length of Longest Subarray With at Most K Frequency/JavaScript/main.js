// Problem: Length of Longest Subarray With at Most K Frequency
// Link to the problem: https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var maxSubarrayLength = function (nums, k) {
    const n = nums.length;
    let i = 0, j = 0, ans = 0;
    let m = new Map();
    while (j < n) {
        m.set(nums[j], (m.get(nums[j]) || 0) + 1);
        while (m.get(nums[j]) > k && i < n) {
            m.set(nums[i], m.get(nums[i]) - 1);
            i++;
        }
        ans = Math.max(ans, j - i + 1);
        j++;
    }
    return ans;
};