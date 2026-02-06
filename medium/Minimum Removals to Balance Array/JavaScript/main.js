// Problem: Minimum Removals to Balance Array
// Link to the problem: https://leetcode.com/problems/minimum-removals-to-balance-array/
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var minRemoval = function (nums, k) {
    const n = nums.length;
    let i = 0, ans = 0;
    nums.sort((a, b) => a - b);
    for (let j = 0; j < n; j++) {
        while (nums[j] > nums[i] * k) {
            i++;
        }
        ans = Math.max(ans, j - i + 1);
    }
    ans = n - ans;
    return ans;
};