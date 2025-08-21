// Problem: Check if Binary String Has at Most One Segment of Ones
// Link to the problem: https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/
/**
 * @param {string} s
 * @return {boolean}
 */
var checkOnesSegment = function (s) {
    let count = 0;
    for (let i = 1; i < s.length; i++) {
        if (s[i] === '0') {
            count++;
        }
        if (s[i] === '1' && count !== 0) {
            return false;
        }
    }
    return true;
};