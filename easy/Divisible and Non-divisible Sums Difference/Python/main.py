# Problem: Divisible and Non-divisible Sums Difference
# Link to the problem: https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/
class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        suma: int = 0
        sumb: int = 0
        for i in range(1, n + 1, 1):
            if i % m == 0:
                sumb += i
            else:
                suma += i
        return suma - sumb
