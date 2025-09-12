// Problem: Count Number of Homogenous Substrings
// Link to the problem: https://leetcode.com/problems/count-number-of-homogenous-substrings/
/**
 * @param {string} s
 * @return {number}
 */
var countHomogenous = function (s) {
    let mod = 1000000007;
    let count = 1;
    let a = new Array();
    for (let i = 1; i < s.length; i++) {
        if (s[i] === s[i - 1]) {
            count++;
        }
        else {
            a.push(count);
            count = 1;
        }
    }
    a.push(count);
    let ans = 0;
    for (let i = 0; i < a.length; i++) {
        ans += (Math.floor(((a[i]) * (a[i] + 1)) / 2) % mod);
    }
    return ans;
};