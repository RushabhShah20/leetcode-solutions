// Problem: Minimize Maximum Pair Sum in Array
// Link to the problem: https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/
/**
 * @param {number[]} nums
 * @return {number}
 */
var minPairSum = function (nums) {
    const n = nums.length;
    nums.sort((a, b) => a - b);
    let l = 0, r = n - 1, ans = 0;
    while (l < r) {
        ans = Math.max(ans, nums[l] + nums[r]);
        l++;
        r--;
    }
    return ans;
};