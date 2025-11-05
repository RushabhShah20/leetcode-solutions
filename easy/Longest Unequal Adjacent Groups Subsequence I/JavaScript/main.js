// Problem: Longest Unequal Adjacent Groups Subsequence I
// Link to the problem: https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i/
/**
 * @param {string[]} words
 * @param {number[]} groups
 * @return {string[]}
 */
var getLongestSubsequence = function (words, groups) {
    let n = groups.length;
    let ans = new Array();
    ans.push(words[0]);
    for (let i = 1; i < n; i++) {
        if (groups[i] !== groups[i - 1]) {
            ans.push(words[i]);
        }
    }
    return ans;
};