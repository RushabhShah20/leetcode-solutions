// Problem: Binary Gap
// Link to the problem: https://leetcode.com/problems/binary-gap/
/**
 * @param {number} n
 * @return {number}
 */
var binaryGap = function (n) {
    let ans = 0, x = 0, y = -1;
    while (n > 0) {
        if (n % 2 === 1) {
            if (y !== -1) {
                ans = Math.max(ans, x - y);
            }
            y = x;
        }
        n = Math.floor(n / 2);
        x++;
    }
    return ans;
};