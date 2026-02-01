// Problem: Divide an Array Into Subarrays With Minimum Cost I
// Link to the problem: https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-i/
/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumCost = function (nums) {
    const n = nums.length;
    let m1 = 51, m2 = 51;
    for (let i = 1; i < n; i++) {
        if (nums[i] < m1) {
            m2 = m1;
            m1 = nums[i];
        }
        else if (nums[i] < m2) {
            m2 = nums[i];
        }
    }
    const ans = nums[0] + m1 + m2;
    return ans;
};