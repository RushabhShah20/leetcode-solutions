// Problem: Sum of Two Integers
// Link to the problem: https://leetcode.com/problems/sum-of-two-integers/
function getSum(a: number, b: number): number {
    while (b != 0) {
        let x: number = (a & b) << 1;
        a = a ^ b;
        b = x;
    }
    return a;
};