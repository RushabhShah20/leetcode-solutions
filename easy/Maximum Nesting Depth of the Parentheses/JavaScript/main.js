// Problem: Maximum Nesting Depth of the Parentheses
// Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
/**
 * @param {string} s
 * @return {number}
 */
var maxDepth = function (s) {
    const n = s.length;
    let ans = 0, x = 0;
    for (let i = 0; i < n; i++) {
        if (s[i] == '(') {
            x++;
        }
        if (s[i] == ')') {
            x--;
        }
        ans = Math.max(ans, x);
    }
    return ans;
};