// Problem: Number of Substrings With Only 1s
// Link to the problem: https://leetcode.com/problems/number-of-substrings-with-only-1s/
/**
 * @param {string} s
 * @return {number}
 */
var numSub = function (s) {
    let x = new Array();;
    let y = 0;
    for (let i = 0; i < s.length; i++) {
        if (s[i] === '1') {
            y++;
        }
        else {
            x.push(y);
            y = 0;
        }
    }
    if (y != 0) {
        x.push(y);
    }
    let ans = 0, mod = 1000000007;
    for (let i = 0; i < x.length; i++) {
        ans += (Math.floor(((x[i]) * (x[i] + 1)) / 2) % mod);
    }
    return ans;
};