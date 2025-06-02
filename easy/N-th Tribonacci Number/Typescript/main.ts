// Problem: N-th Tribonacci Number
// Link to the problem: https://leetcode.com/problems/n-th-tribonacci-number/
function tribonacci(n: number): number {
    if (n < 2) {
        return n;
    }
    let a: number = 0, b: number = 1, c: number = 1, d: number;
    while (n-- > 2) {
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
    return c;
};