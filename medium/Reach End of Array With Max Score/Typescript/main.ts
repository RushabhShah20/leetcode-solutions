// Problem: Reach End of Array With Max Score
// Link to the problem: https://leetcode.com/problems/reach-end-of-array-with-max-score/
function findMaximumScore(nums: number[]): number {
    let ans: number = 0, maxElement: number = 0;
    for (let i = 0; i < nums.length; i++) {
        ans += maxElement;
        maxElement = Math.max(maxElement, (nums[i]));
    }
    return ans;
};