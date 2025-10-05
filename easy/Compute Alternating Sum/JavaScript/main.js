// Problem: Compute Alternating Sum
// Link to the problem: https://leetcode.com/problems/compute-alternating-sum/
/**
 * @param {number[]} nums
 * @return {number}
 */
var alternatingSum = function (nums) {
    let ans = 0;
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