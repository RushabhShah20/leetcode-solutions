// Problem: Count Subarrays With Majority Element I
// Link to the problem: https://leetcode.com/problems/count-subarrays-with-majority-element-i/
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var countMajoritySubarrays = function (nums, target) {
    let ans = 0, n = nums.length;
    for (let k = 1; k <= n; k++) {
        let count = 0;
        for (let i = 0; i < n; i++) {
            if (i >= k) {
                if (nums[i] === target) {
                    count++;
                }
                if (nums[i - k] === target) {
                    count--;
                }
            }
            else {
                if (nums[i] === target) {
                    count++;
                }
            }
            if (i >= k - 1) {
                if (2 * count > k) {
                    ans++;
                }
            }
        }
    }
    return ans;
};