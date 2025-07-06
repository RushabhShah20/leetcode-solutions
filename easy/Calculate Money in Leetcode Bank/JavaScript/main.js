// Problem: Calculate Money in Leetcode Bank
// Link to the problem: https://leetcode.com/problems/calculate-money-in-leetcode-bank/
/**
 * @param {number} n
 * @return {number}
 */
var totalMoney = function (n) {
    let q = (n / 7) >> 0;
    let r = n % 7;
    let ans = ((((q * (q - 1)) / 2) >> 0) * 7);
    ans += q * 28;
    ans += ((((r * (r + 1)) / 2) >> 0) + (q * r));
    return ans;
};
