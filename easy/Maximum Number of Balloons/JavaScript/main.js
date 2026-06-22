// Problem: Maximum Number of Balloons
// Link to the problem: https://leetcode.com/problems/maximum-number-of-balloons/
/**
 * @param {string} text
 * @return {number}
 */
var maxNumberOfBalloons = function (text) {
    const n = text.length;
    let ans = 100000;
    let a = new Array(26).fill(0);
    for (let i = 0; i < n; i++) {
        a[text[i].charCodeAt(0) - ('a').charCodeAt(0)]++;
    }
    ans = Math.min(ans, a[1]);
    ans = Math.min(ans, a[0]);
    ans = Math.min(ans, Math.floor(a[11] / 2));
    ans = Math.min(ans, Math.floor(a[14] / 2));
    ans = Math.min(ans, a[13]);
    return ans;
};