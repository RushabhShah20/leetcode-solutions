// Problem: Minimum One Bit Operations to Make Integers Zero
// Link to the problem: https://leetcode.com/problems/minimum-one-bit-operations-to-make-integers-zero/
/**
 * @param {number} n
 * @return {number}
 */
var minimumOneBitOperations = function (n) {
    let ans = 0;
    while (n > 0) {
        ans ^= n;
        n >>= 1;
    }
    return ans;
};