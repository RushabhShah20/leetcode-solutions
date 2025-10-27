// Problem: Is Subsequence
// Link to the problem: https://leetcode.com/problems/is-subsequence/
/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isSubsequence = function (s, t) {
    let n = t.length, m = s.length, i, j;
    for (i = 0, j = 0; i < n && j < m; i++) {
        if (t[i] === s[j]) {
            j++;
        }
    }
    if (j < m) {
        return false;
    }
    else {
        return true;
    }
};