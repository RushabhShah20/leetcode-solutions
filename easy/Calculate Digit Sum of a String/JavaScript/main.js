// Problem: Calculate Digit Sum of a String
// Link to the problem: https://leetcode.com/problems/calculate-digit-sum-of-a-string/
/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var digitSum = function (s, k) {
    while (s.length > k) {
        let t = "";
        const n = s.length;
        for (let i = 0; i < n; i += k) {
            let x = 0;
            for (let j = i; j < Math.min(i + k, n); ++j) {
                x += Number(s[j]);
            }
            t += String(x);
        }
        s = t;
    }
    return s;
};