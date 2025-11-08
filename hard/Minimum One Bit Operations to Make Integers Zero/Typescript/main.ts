// Problem: Minimum One Bit Operations to Make Integers Zero
// Link to the problem: https://leetcode.com/problems/minimum-one-bit-operations-to-make-integers-zero/
function minimumOneBitOperations(n: number): number {
    let ans: number = 0;
    while (n > 0) {
        ans ^= n;
        n >>= 1;
    }
    return ans;
};