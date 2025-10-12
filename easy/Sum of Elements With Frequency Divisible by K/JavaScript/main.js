// Problem: Sum of Elements With Frequency Divisible by K
// Link to the problem: https://leetcode.com/problems/sum-of-elements-with-frequency-divisible-by-k/
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var sumDivisibleByK = function (nums, k) {
    let m = new Map();
    for (let i = 0; i < nums.length; i++) {
        if (m.has(nums[i])) {
            m.set(nums[i], m.get(nums[i]) + 1);
        } else {
            m.set(nums[i], 1);
        }
    }
    let ans = 0;
    for (let [key, value] of m) {
        if (value % k === 0) {
            ans += (key * value);
        }
    }
    return ans;
};