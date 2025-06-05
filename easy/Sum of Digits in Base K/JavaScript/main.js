// Problem: Sum of Digits in Base K
// Link to the problem: https://leetcode.com/problems/sum-of-digits-in-base-k/
/**
 * @param {number} n
 * @param {number} k
 * @return {number}
 */
var sumBase = function (n, k) {
    let sum = 0;
    while (n > 0) {
        sum += n % k;
        n = (n / k) >> 0;
    }
    return sum;
};
