// Problem: Valid Parentheses
// Link to the problem: https://leetcode.com/problems/valid-parentheses/
/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function (s) {
    const n = s.length;
    let st = new Array();
    for (let i = 0; i < n; i++) {
        if (s[i] === '(' || s[i] === '{' || s[i] === '[') {
            st.push(s[i]);
        }
        else {
            if (st.length === 0) {
                return false;
            }
            const x = st[st.length - 1], y = s[i];
            if ((x === '(' && y === ')') || (x === '{' && y === '}') || (x === '[' && y === ']')) {
                st.pop();
            }
            else {
                return false;
            }
        }
    }
    const ans = st.length === 0;
    return ans;
};