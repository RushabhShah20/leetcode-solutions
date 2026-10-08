// Problem: Remove Outermost Parentheses
// Link to the problem: https://leetcode.com/problems/remove-outermost-parentheses/
/**
 * @param {string} s
 * @return {string}
 */
var removeOuterParentheses = function (s) {
    const n = s.length;
    let x = 0;
    let ans = "";
    for (let i = 0; i < n; i++) {
        if (s[i] === ')') {
            x--;
        }
        if (x > 0) {
            ans += s[i];
        }
        if (s[i] === '(') {
            x++;
        }
    }
    return ans;
};