// Problem: Reverse Degree of a String
// Link to the problem: https://leetcode.com/problems/reverse-degree-of-a-string/
/**
 * @param {string} s
 * @return {number}
 */
var reverseDegree = function (s) {
    const n = s.length;
    let ans = 0;
    for (let i = 0; i < n; i++) {
        ans += (26 - (s.charCodeAt(i) - 'a'.charCodeAt(0))) * (i + 1);
    }
    return ans;
};