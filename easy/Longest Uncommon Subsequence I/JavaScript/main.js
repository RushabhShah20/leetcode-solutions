// Problem: Longest Uncommon Subsequence I
// Link to the problem: https://leetcode.com/problems/longest-uncommon-subsequence-i/
/**
 * @param {string} a
 * @param {string} b
 * @return {number}
 */
var findLUSlength = function (a, b) {
    if (a === b) {
        return -1;
    }
    else {
        return Math.max(a.length, b.length);
    }
};