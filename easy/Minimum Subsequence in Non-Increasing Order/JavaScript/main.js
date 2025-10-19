// Problem: Minimum Subsequence in Non-Increasing Order
// Link to the problem: https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var minSubsequence = function (nums) {
    nums.sort((a, b) => b - a);
    let sum = 0;
    for (const num of nums) {
        sum += num;
    }
    let a = 0;
    let ans = new Array();
    for (const num of nums) {
        a += num;
        if (a > sum - a) {
            ans.push(num);
            break;
        }
        else {
            ans.push(num);
        }
    }
    return ans;
};