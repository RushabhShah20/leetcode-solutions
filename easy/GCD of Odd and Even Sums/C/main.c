// Problem: GCD of Odd and Even Sums
// Link to the problem: https://leetcode.com/problems/gcd-of-odd-and-even-sums/
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int gcdOfOddEvenSums(int n)
{
    return gcd((n) * (n + 1), pow(n, 2));
}