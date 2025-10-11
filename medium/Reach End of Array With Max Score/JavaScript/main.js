// Problem: Reach End of Array With Max Score
// Link to the problem: https://leetcode.com/problems/reach-end-of-array-with-max-score/
/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaximumScore = function (nums) {
    let ans = 0, maxElement = 0;
    for (let i = 0; i < nums.length; i++) {
        ans += maxElement;
        maxElement = Math.max(maxElement, (nums[i]));
    }
    return ans;
};