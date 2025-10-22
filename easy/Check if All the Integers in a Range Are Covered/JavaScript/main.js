// Problem: Check if All the Integers in a Range Are Covered
// Link to the problem: https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/
/**
 * @param {number[][]} ranges
 * @param {number} left
 * @param {number} right
 * @return {boolean}
 */
var isCovered = function (ranges, left, right) {
    let covered = new Array(51).fill(false);
    for (const range of ranges) {
        for (let i = range[0]; i <= range[1]; i++) {
            covered[i] = true;
        }
    }
    for (let i = left; i <= right; i++) {
        if (covered[i] === false) {
            return false;
        }
    }
    return true;
};