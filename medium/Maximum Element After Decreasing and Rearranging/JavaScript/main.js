// Problem: Maximum Element After Decreasing and Rearranging
// Link to the problem: https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/
/**
 * @param {number[]} arr
 * @return {number}
 */
var maximumElementAfterDecrementingAndRearranging = function (arr) {
    arr.sort((a, b) => a - b);
    const n = arr.length;
    let ans = 1;
    for (let i = 1; i < n; i++) {
        if (arr[i] >= ans + 1) {
            ans++;
        }
    }
    return ans;
};