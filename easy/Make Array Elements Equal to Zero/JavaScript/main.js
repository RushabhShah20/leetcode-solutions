// Problem: Make Array Elements Equal to Zero
// Link to the problem: https://leetcode.com/problems/make-array-elements-equal-to-zero/
/**
 * @param {number[]} nums
 * @return {number}
 */
var countValidSelections = function (nums) {
    let n = nums.length;
    let ans = 0;
    let sum = 0;
    for (const num of nums) {
        sum += num;
    }
    let leftSum = 0;
    let rightSum = sum;
    for (let i = 0; i < n; i++) {
        if (nums[i] == 0) {
            if (leftSum - rightSum >= 0 && leftSum - rightSum <= 1) {
                ans++;
            }
            if (rightSum - leftSum >= 0 && rightSum - leftSum <= 1) {
                ans++;
            }
        } else {
            leftSum += nums[i];
            rightSum -= nums[i];
        }
    }
    return ans;
};