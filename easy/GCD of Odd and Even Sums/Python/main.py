# Problem: GCD of Odd and Even Sums
# Link to the problem: https://leetcode.com/problems/gcd-of-odd-and-even-sums/
class Solution:
    def gcd(self, a: int, b: int) -> int:
        return a if b == 0 else self.gcd(b, a % b)

    def gcdOfOddEvenSums(self, n: int) -> int:
        return self.gcd((n) * (n + 1), pow(n, 2))
