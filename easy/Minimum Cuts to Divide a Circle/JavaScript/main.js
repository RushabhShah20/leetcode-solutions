// Problem: Minimum Cuts to Divide a Circle
// Link to the problem: https://leetcode.com/problems/minimum-cuts-to-divide-a-circle/
/**
 * @param {number} n
 * @return {number}
 */
var numberOfCuts = function (n) {
    if (n === 1) {
        return 0;
    }
    else if (n % 2 === 0) {
        return Math.floor(n / 2);
    }
    else {
        return n;
    }
};