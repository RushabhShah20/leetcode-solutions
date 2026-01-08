// Problem: Smallest Even Multiple
// Link to the problem: https://leetcode.com/problems/smallest-even-multiple/
/**
 * @param {number} n
 * @return {number}
 */
var smallestEvenMultiple = function (n) {
    if (n % 2 === 0) {
        return n;
    }
    else {
        return 2 * n;
    }
};