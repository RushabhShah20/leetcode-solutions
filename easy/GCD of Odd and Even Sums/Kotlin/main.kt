// Problem: GCD of Odd and Even Sums
// Link to the problem: https://leetcode.com/problems/gcd-of-odd-and-even-sums/
class Solution {
    fun gcd(a: Int, b: Int): Int {
        return if (b == 0) a else gcd(b, a % b)
    }
    fun gcdOfOddEvenSums(n: Int): Int {
        return gcd(n * (n + 1), Math.pow(n.toDouble(), 2.0).toInt())
    }
}