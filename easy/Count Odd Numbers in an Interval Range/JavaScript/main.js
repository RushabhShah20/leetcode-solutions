// Problem: Count Odd Numbers in an Interval Range
// Link to the problem: https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
/**
 * @param {number} low
 * @param {number} high
 * @return {number}
 */
var countOdds = function (low, high) {
    let ans;
    if (low % 2 === 0) {
        ans = Math.floor((high - low + 1) / 2);
    }
    else {
        ans = Math.floor((high - low + 2) / 2);
    }
    return ans;
};