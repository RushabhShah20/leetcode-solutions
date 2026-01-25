// Problem: Minimum Difference Between Highest and Lowest of K Scores
// Link to the problem: https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/
function minimumDifference(nums: number[], k: number): number {
    const n: number = nums.length;
    nums.sort((a, b) => a - b);
    let ans: number = 100001;
    for (let i = 0; i < n - k + 1; i++) {
        ans = Math.min(ans, nums[i + k - 1] - nums[i]);
    }
    return ans;
};