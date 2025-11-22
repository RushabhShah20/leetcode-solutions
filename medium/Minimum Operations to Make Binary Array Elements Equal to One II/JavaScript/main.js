// Problem: Minimum Operations to Make Binary Array Elements Equal to One II
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-ii/
/**
 * @param {number[]} nums
 * @return {number}
 */
var minOperations = function (nums) {
    let ans = 0;
    for (const num of nums) {
        if (ans % 2 === 0) {
            if (num === 0) {
                ans++;
            }
        }
        else {
            if (num === 1) {
                ans++;
            }
        }
    }
    return ans;
};