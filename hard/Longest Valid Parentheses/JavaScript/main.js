// Problem: Longest Valid Parentheses
// Link to the problem: https://leetcode.com/problems/longest-valid-parentheses/
/**
 * @param {string} s
 * @return {number}
 */
var longestValidParentheses = function (s) {
    const n = s.length;
    let ans = 0, x = 0, y = 0;
    for (let i = 0; i < n; i++) {
        if (s[i] === '(') {
            x++;
        }
        else {
            y++;
        }
        if (x === y) {
            ans = Math.max(ans, x + y);
        }
        else if (y > x) {
            x = 0;
            y = 0;
        }
    }
    x = 0;
    y = 0;
    for (let i = n - 1; i >= 0; i--) {
        if (s[i] === '(') {
            x++;
        }
        else {
            y++;
        }
        if (x === y) {
            ans = Math.max(ans, x + y);
        }
        else if (x > y) {
            x = 0;
            y = 0;
        }
    }
    return ans;
};