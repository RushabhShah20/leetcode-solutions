// Problem: Divisible and Non-divisible Sums Difference
// Link to the problem: https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/
/**
 * @param {number} n
 * @param {number} m
 * @return {number}
 */
var differenceOfSums = function (n, m) {
    let suma = 0, sumb = 0;
    for (let i = 1; i <= n; i++) {
        if (i % m === 0) {
            sumb += i;
        }
        else {
            suma += i;
        }
    }
    return suma - sumb;
};