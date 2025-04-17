// Problem: Strictly Palindromic Number
// Link to the problem: https://leetcode.com/problems/strictly-palindromic-number/
/**
 * @param {number} n
 * @return {boolean}
 */
var nInary = function (n, b) {
    let res = 0;
    let mul = 1;
    while (n > 0) {
        res += (n % b) * mul;
        n = n / b >> 0;
        mul *= 10;
    }
    return res;
}
var isPalindrome = function (n) {
    let rev = 0;
    let org = n;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n = n / 10 >> 0;
    }
    return org === rev;
}
var isStrictlyPalindromic = function (n) {
    let ans = false;
    for (let i = 2; i <= n - 2; i++) {
        let num = nInary(n, i);
        let x = isPalindrome(num)
        if (x) {
            ans = true;
        }
        else {
            ans = false;
            break;
        }
    }
    return ans;
};