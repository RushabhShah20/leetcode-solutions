// Problem: Number of Steps to Reduce a Number in Binary Representation to One
// Link to the problem: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/
/**
 * @param {string} s
 * @return {number}
 */
var numSteps = function (s) {
    const n = s.length;
    let ans = 0, x = 0;
    for (let i = n - 1; i > 0; i--) {
        const y = s[i] - '0' + x;
        if (y % 2 === 0) {
            ans++;
        }
        else {
            ans += 2;
            x = 1;
        }
    }
    ans += x;
    return ans;
};