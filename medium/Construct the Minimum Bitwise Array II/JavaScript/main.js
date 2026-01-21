// Problem: Construct the Minimum Bitwise Array II
// Link to the problem: https://leetcode.com/problems/construct-the-minimum-bitwise-array-ii/
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var minBitwiseArray = function (nums) {
    const n = nums.length;
    let ans = new Array(n);
    for (let i = 0; i < n; i++) {
        if (nums[i] % 2 === 0) {
            ans[i] = -1;
        }
        else {
            ans[i] = nums[i] - Math.floor(((nums[i] + 1) & (-nums[i] - 1)) / 2);
        }
    }
    return ans;
};