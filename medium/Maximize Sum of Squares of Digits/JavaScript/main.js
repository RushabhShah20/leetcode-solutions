// Problem: Maximize Sum of Squares of Digits
// Link to the problem: https://leetcode.com/problems/maximize-sum-of-squares-of-digits/
/**
 * @param {number} num
 * @param {number} sum
 * @return {string}
 */
var maxSumOfSquares = function (num, sum) {
    if (sum < 1 || sum > 9 * num) {
        return "";
    }
    const x = Math.floor(sum / 9), y = sum % 9;
    let ans = "9".repeat(x);
    num -= x;
    if (y > 0) {
        ans += String(y);
        num--;
    }
    ans += "0".repeat(num);
    return ans;
};