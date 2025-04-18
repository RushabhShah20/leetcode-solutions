// Problem: Score of a String
// Link to the problem: https://leetcode.com/problems/score-of-a-string/
/**
 * @param {string} s
 * @return {number}
 */
var scoreOfString = function (s) {
    let ans = 0;
    for (let i = 0; i < s.length - 1; i++) {
        ans += Math.abs(s.charCodeAt(i) - s.charCodeAt(i + 1))
    }
    return ans;
};