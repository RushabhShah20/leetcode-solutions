// Problem: Find the Largest Almost Missing Integer
// Link to the problem: https://leetcode.com/problems/find-the-largest-almost-missing-integer/
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var largestInteger = function (nums, k) {
    const n = nums.length;
    let ans = -1;
    if (n == k) {
        for (let i = 0; i < n; i++) {
            ans = Math.max(ans, nums[i]);
        }
        return ans;
    }
    let a = new Array(51).fill(0);
    for (let i = 0; i < n; i++) {
        a[nums[i]]++;
    }
    if (k == 1) {
        for (let i = 50; i >= 0; i--) {
            if (a[i] === 1) {
                return i;
            }
        }
        return -1;
    }
    if (a[nums[0]] === 1) {
        ans = Math.max(ans, nums[0]);
    }
    if (a[nums[n - 1]] === 1) {
        ans = Math.max(ans, nums[n - 1]);
    }
    return ans;
};