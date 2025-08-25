// Problem: GCD of Odd and Even Sums
// Link to the problem: https://leetcode.com/problems/gcd-of-odd-and-even-sums/
/**
 * @param {number} n
 * @return {number}
 */
var gcd = function (a, b) {
    if (b === 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
};
var gcdOfOddEvenSums = function (n) {
    return gcd(((n) * (n + 1)), Math.pow(n, 2));
};