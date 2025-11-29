// Problem: Minimum Operations to Make Array Sum Divisible by K
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/
function minOperations(nums: number[], k: number): number {
    let sum: number = 0;
    for (const num of nums) {
        sum += num;
    }
    let ans: number = sum % k;
    return ans;
};