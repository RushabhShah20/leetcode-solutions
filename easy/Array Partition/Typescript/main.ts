// Problem: Array Partition
// Link to the problem: https://leetcode.com/problems/array-partition/
function arrayPairSum(nums: number[]): number {
    let ans: number = 0;
    nums.sort((a, b) => a - b);
    for (let i = 0; i < nums.length; i += 2) {
        ans += nums[i];
    }
    return ans;
};