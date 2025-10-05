// Problem: Compute Alternating Sum
// Link to the problem: https://leetcode.com/problems/compute-alternating-sum/
function alternatingSum(nums: number[]): number {
    let ans: number = 0;
    for (let i = 0; i < nums.length; i++) {
        if (i % 2 === 0) {
            ans += nums[i];
        }
        else {
            ans -= nums[i];
        }
    }
    return ans;
};