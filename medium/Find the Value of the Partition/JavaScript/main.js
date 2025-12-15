// Problem: Find the Value of the Partition
// Link to the problem: https://leetcode.com/problems/find-the-value-of-the-partition/
/**
 * @param {number[]} nums
 * @return {number}
 */
var findValueOfPartition = function (nums) {
    nums.sort((a, b) => a - b);
    let ans = 1000000000, n = nums.length;
    for (let i = 0; i < n - 1; i++) {
        ans = Math.min(ans, nums[i + 1] - nums[i]);
    }
    return ans;
};