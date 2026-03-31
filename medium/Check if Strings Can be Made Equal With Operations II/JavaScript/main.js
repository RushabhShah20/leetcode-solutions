// Problem: Check if Strings Can be Made Equal With Operations II
// Link to the problem: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-ii/
/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */
var checkStrings = function (s1, s2) {
    const n = s1.length;
    let x = new Array(52).fill(0), y = new Array(52).fill(0);
    for (let i = 0; i < n; i++) {
        if (i % 2 === 0) {
            x[s1[i].codePointAt(0) - ('a').codePointAt(0)]++;
            y[s2[i].codePointAt(0) - ('a').codePointAt(0)]++;
        }
        else {
            x[s1[i].codePointAt(0) - ('a').codePointAt(0) + 26]++;
            y[s2[i].codePointAt(0) - ('a').codePointAt(0) + 26]++;
        }
    }
    for (let i = 0; i < 52; i++) {
        if (x[i] !== y[i]) {
            return false;
        }
    }
    return true;
};