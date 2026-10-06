// Problem: Minimum Add to Make Parentheses Valid
// Link to the problem: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
/**
 * @param {string} s
 * @return {number}
 */
var minAddToMakeValid = function (s) {
    const n = s.length;
    let x = 0, y = 0;
    for (let i = 0; i < n; i++) {
        if (s[i] === '(') {
            x++;
        }
        else {
            if (x > 0) {
                x--;
            }
            else {
                y++;
            }
        }
    }
    const ans = x + y;
    return ans;
};