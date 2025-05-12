// Problem: Pow(x, n)
// Link to the problem: https://leetcode.com/problems/powx-n/
function myPow(x: number, n: number): number {
    if (n === 0) {
        return 1;
    }
    if (n < 0) {
        n = -1 * n;
        x = (1 / x);
    }
    if (n % 2 === 0) {
        return myPow(x * x, (n / 2));
    } else {
        return x * myPow(x, n - 1);
    }
};