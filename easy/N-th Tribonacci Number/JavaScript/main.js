// Problem: N-th Tribonacci Number
// Link to the problem: https://leetcode.com/problems/n-th-tribonacci-number/
/**
 * @param {number} n
 * @return {number}
 */
var tribonacci = function (n) {
    if (n < 2) {
        return n;
    }
    let a = 0, b = 1, c = 1, d;
    while (n-- > 2) {
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
    return c;
};