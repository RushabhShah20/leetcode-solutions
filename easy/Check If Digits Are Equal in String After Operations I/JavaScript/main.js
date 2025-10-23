// Problem: Check If Digits Are Equal in String After Operations I
// Link to the problem: https://leetcode.com/problems/check-if-digits-are-equal-in-string-after-operations-i/
/**
 * @param {string} s
 * @return {boolean}
 */
var hasSameDigits = function (s) {
    while (s.length != 2) {
        let t = "";
        for (let i = 0; i < s.length - 1; i++) {
            let x = parseInt(s[i]);
            let y = parseInt(s[i + 1]);
            let z = (x + y) % 10;
            let a = String.fromCharCode(z + '0'.charCodeAt(0));
            t += a;
        }
        s = t;
    }
    return s[0] == s[1];
};