// Problem: Make Array Elements Equal to Zero
// Link to the problem: https://leetcode.com/problems/make-array-elements-equal-to-zero/
function countValidSelections(nums: number[]): number {
    let n: number = nums.length;
    let ans: number = 0;
    let sum: number = 0;
    for (const num of nums) {
        sum += num;
    }
    let leftSum: number = 0;
    let rightSum: number = sum;
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