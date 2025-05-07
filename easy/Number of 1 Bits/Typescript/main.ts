// Problem: Number of 1 Bits
// Link to the problem: https://leetcode.com/problems/number-of-1-bits/
function hammingWeight(n: number): number {
    let ans: number = 0;
    while (n !== 0) {
        n &= (n - 1);
        ans++;
    }
    return ans;
};