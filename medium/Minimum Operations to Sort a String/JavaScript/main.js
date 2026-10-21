// Problem: Minimum Operations to Sort a String
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-sort-a-string/
/**
 * @param {string} s
 * @return {number}
 */
var minOperations = function (s) {
    const n = s.length;
    let mn = 'z', mx = 'a', a = true;
    for (let i = 0; i < n; i++) {
        if (mx < s[i]) {
            mx = s[i];
        }
        if (mn > s[i]) {
            mn = s[i];
        }
        if (i > 0 && s[i - 1] > s[i]) {
            a = false;
        }
    }
    if (a) {
        return 0;
    }
    if (n === 2) {
        return -1;
    }
    if (s[0] === mn || s[n - 1] === mx) {
        return 1;
    }
    for (let i = 1; i < n - 1; i++) {
        if (s[i] === mn || s[i] === mx) {
            return 2;
        }
    }
    return 3;
};