// Problem: Escape The Ghosts
// Link to the problem: https://leetcode.com/problems/escape-the-ghosts/
/**
 * @param {number[][]} ghosts
 * @param {number[]} target
 * @return {boolean}
 */
var escapeGhosts = function (ghosts, target) {
    let x = (Math.abs(target[0])) + (Math.abs(target[1]));
    for (const ghost of ghosts) {
        let y = (Math.abs(ghost[0] - target[0])) + (Math.abs(ghost[1] - target[1]));
        if (y <= x) {
            return false;
        }
    }
    return true;
};