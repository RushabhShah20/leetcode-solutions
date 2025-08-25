// Problem: GCD of Odd and Even Sums
// Link to the problem: https://leetcode.com/problems/gcd-of-odd-and-even-sums/
function gcd(a: number, b: number): number {
    if (b === 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
};
function gcdOfOddEvenSums(n: number): number {
    return gcd(((n) * (n + 1)), Math.pow(n, 2));
};