// Problem: Max Consecutive Ones
// Link to the problem: https://leetcode.com/problems/max-consecutive-ones/
function findMaxConsecutiveOnes(nums: number[]): number {
    let ans: number = 0, count: number = 0;
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] === 1) {
            count++;
            ans = Math.max(ans, count);
        }
        else {
            count = 0;
        }
    }
    return ans;
};