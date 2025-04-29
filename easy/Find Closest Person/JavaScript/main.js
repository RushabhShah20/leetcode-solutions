// Problem: Find Closest Person
// Link to the problem: https://leetcode.com/problems/find-closest-person/
/**
 * @param {number} x
 * @param {number} y
 * @param {number} z
 * @return {number}
 */
var findClosest = function (x, y, z) {
    if (Math.abs(x - z) < Math.abs(y - z)) {
        return 1;
    } else if (Math.abs(x - z) > Math.abs(y - z)) {
        return 2;
    } else {
        return 0;
    }
};