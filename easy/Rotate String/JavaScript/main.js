// Problem: Rotate String
// Link to the problem: https://leetcode.com/problems/rotate-string/
/**
 * @param {string} s
 * @param {string} goal
 * @return {boolean}
 */
var rotateString = function (s, goal) {
    if (s.length !== goal.length) {
        return false;
    } else {
        s = s + s;
        const ans = s.includes(goal);
        return ans;
    }
};