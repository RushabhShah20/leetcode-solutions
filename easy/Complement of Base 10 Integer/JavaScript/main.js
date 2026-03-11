// Problem: Complement of Base 10 Integer
// Link to the problem: https://leetcode.com/problems/complement-of-base-10-integer/
/**
 * @param {number} n
 * @return {number}
 */
var bitwiseComplement = function (n) {
    if (n === 0) {
        return 1;
    }
    let x = 1;
    while (x < n) {
        x = (x << 1) | 1;
    }
    const ans = n ^ x;
    return ans;
};
