// Problem: Count Numbers with Unique Digits
// Link to the problem: https://leetcode.com/problems/count-numbers-with-unique-digits/
/**
 * @param {number} n
 * @return {number}
 */
var countNumbersWithUniqueDigits = function (n) {
    if (n === 0) {
        return 1;
    }
    if (n === 1) {
        return 10;
    }
    let total = 10;
    let current = 9;
    for (let i = 2; i <= n; ++i) {
        current *= (10 - (i - 1));
        total += current;
    }
    return total;
};