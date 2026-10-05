// Problem: Score of Parentheses
// Link to the problem: https://leetcode.com/problems/score-of-parentheses/
/**
 * @param {string} s
 * @return {number}
 */
var scoreOfParentheses = function (s) {
    const n = s.length;
    let ans = 0, x = 0;
    for (let i = 0; i < n; i++) {
        if (s[i] === '(') {
            x++;
        }
        else {
            x--;
            if (s[i - 1] === '(') {
                ans += 1 << x;
            }
        }
    }
    return ans;
};