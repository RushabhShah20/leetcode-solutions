# Problem: N-th Tribonacci Number
# Link to the problem: https://leetcode.com/problems/n-th-tribonacci-number/
class Solution:
    def tribonacci(self, n: int) -> int:
        if n < 2:
            return n
        a: int = 0
        b: int = 1
        c: int = 1
        for _ in range(n - 2):
            d = a + b + c
            a = b
            b = c
            c = d
        return c
