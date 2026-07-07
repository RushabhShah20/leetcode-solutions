// Problem: Concatenate Non-Zero Digits and Multiply by Sum I
// Link to the problem: https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/
/**
 * @param {number} n
 * @return {number}
 */
var sumAndMultiply = function (n) {
    let x = 0, y = 0, a = 1;
    while (n > 0) {
        const z = n % 10;
        n = Math.floor(n / 10);
        if (z === 0) {
            continue;
        }
        x = z * a + x;
        y += z;
        a *= 10;
    }
    const ans = x * y;
    return ans;
};