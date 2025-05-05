// Problem: Alternating Digits Sum
// Link to the problem: https://leetcode.com/problems/alternating-digit-sum/
/**
 * @param {number} n
 * @return {number}
 */
var split = function (n) {
    let res = new Array();
    while (n > 0) {
        res.push(n % 10);
        n = (n / 10) >> 0;
    }
    return res;
}
var alternateDigitSum = function (n) {
    let ans = 0;
    let digits = split(n);
    for (let i = digits.length - 1; i >= 0; i--) {
        if (digits.length % 2 == 0) {
            if (i % 2 !== 0) {
                ans += digits[i];
            } else {
                ans -= digits[i];
            }
        } else {
            if (i % 2 === 0) {
                ans += digits[i];
            } else {
                ans -= digits[i];
            }
        }
    }
    return ans;
};