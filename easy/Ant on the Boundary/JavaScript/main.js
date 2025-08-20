// Problem: Ant on the Boundary
// Link to the problem: https://leetcode.com/problems/ant-on-the-boundary/
/**
 * @param {number[]} nums
 * @return {number}
 */
var returnToBoundaryCount = function (nums) {
    let ans = 0, count = 0;
    for (let i = 0; i < nums.length; i++) {
        count += nums[i];
        if (count === 0) {
            ans++;
        }
    }
    return ans;
};