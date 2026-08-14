// Problem: Maximum Length Substring With Two Occurrences
// Link to the problem: https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/
/**
 * @param {string} s
 * @return {number}
 */
var maximumLengthSubstring = function (s) {
    const n = s.length;
    let i = 0, j = 0, ans = 0;
    let a = new Array(26).fill(0);
    while (j < n) {
        a[s.charCodeAt(j) - 'a'.charCodeAt(0)]++;
        while (a[s.charCodeAt(j) - 'a'.charCodeAt(0)] > 2 && i < n) {
            a[s.charCodeAt(i) - 'a'.charCodeAt(0)]--;
            i++;
        }
        ans = Math.max(ans, j - i + 1);
        j++;
    }
    return ans;
};