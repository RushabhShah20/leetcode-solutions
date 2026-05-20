// Problem: Find the Prefix Common Array of Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/
/**
 * @param {number[]} A
 * @param {number[]} B
 * @return {number[]}
 */
var findThePrefixCommonArray = function (A, B) {
    const n = A.length;
    let m = new Array(n + 1).fill(0), ans = new Array(n);
    let x = 0;
    for (let i = 0; i < n; i++) {
        m[A[i]]++;
        if (m[A[i]] === 2) {
            x++;
        }
        m[B[i]]++;
        if (m[B[i]] === 2) {
            x++;
        }
        ans[i] = x;
    }
    return ans;
};