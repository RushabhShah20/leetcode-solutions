// Problem: Smallest Number With All Set Bits
// Link to the problem: https://leetcode.com/problems/smallest-number-with-all-set-bits/
/**
 * @param {number} n
 * @return {number}
 */
var toBinary = function (n) {
    let ans = new Array();
    while (n > 0) {
        ans.push(n % 2);
        n = Math.floor(n / 2);
    }
    return ans;
};
var smallestNumber = function (n) {
    let binary = toBinary(n);
    let a = new Array(binary.length);
    for (let i = 0; i < a.length; i++) {
        a[i] = 1;
    }
    let ans = 0;
    for (let i = 0; i < a.length; i++) {
        ans += (Math.pow(2, i) * a[i]);
    }
    return ans;
};