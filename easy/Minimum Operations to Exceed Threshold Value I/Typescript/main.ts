// Problem: Minimum Operations to Exceed Threshold Value I
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i/
function minOperations(nums: number[], k: number): number {
    let ans: number = 0;
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] < k) {
            ans++;
        }
    }
    return ans;
};