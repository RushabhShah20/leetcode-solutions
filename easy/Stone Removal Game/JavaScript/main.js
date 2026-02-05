// Problem: Stone Removal Game
// Link to the problem: https://leetcode.com/problems/stone-removal-game/
/**
 * @param {number} n
 * @return {boolean}
 */
var canAliceWin = function (n) {
    if (n >= 10 && n < 19) {
        return true;
    }
    if (n >= 27 && n < 34) {
        return true;
    }
    if (n >= 40 && n < 45) {
        return true;
    }
    if (n >= 49 && n < 52) {
        return true;
    }
    return false;
};