// Problem: Find N Unique Integers Sum up to Zero
// Link to the problem: https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/
/**
 * @param {number} n
 * @return {number[]}
 */
var sumZero = function (n) {
    let ans = new Array(n);
    for (let i = 0; i < n; i++) {
        ans[i] = 2 * i - n + 1;
    }
    return ans;
};