// Problem: Process String with Special Operations I
// Link to the problem: https://leetcode.com/problems/process-string-with-special-operations-i/
/**
 * @param {string} s
 * @return {string}
 */
var processStr = function (s) {
    let ans = [];
    for (const c of s) {
        if (c === '*') {
            if (ans.length > 0) {
                ans.pop();
            }
        } else if (c === '#') {
            ans.push(...ans);
        } else if (c === '%') {
            ans.reverse();
        } else {
            ans.push(c);
        }
    }
    return ans.join('');
};