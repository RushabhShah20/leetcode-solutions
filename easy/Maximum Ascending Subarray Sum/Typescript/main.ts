// Problem: Maximum Ascending Subarray Sum
// Link to the problem: https://leetcode.com/problems/maximum-ascending-subarray-sum/
function maxAscendingSum(nums: number[]): number {
    let ans: number = 0, sum: number = nums[0];
    for (let i = 1; i < nums.length; i++) {
        if (nums[i] > nums[i - 1]) {
            sum += nums[i];
        }
        else {
            ans = Math.max(ans, sum);
            sum = nums[i];
        }
    }
    ans = Math.max(ans, sum);
    return ans;
};