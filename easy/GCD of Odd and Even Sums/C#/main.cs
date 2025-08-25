// Problem: GCD of Odd and Even Sums
// Link to the problem: https://leetcode.com/problems/gcd-of-odd-and-even-sums/
public class Solution
{
    int gcd(int a, int b)
    {
        return b == 0 ? a : gcd(b, a % b);
    }
    public int GcdOfOddEvenSums(int n)
    {
        return gcd((n) * (n + 1), (int)(Math.Pow(n, 2)));
    }
}