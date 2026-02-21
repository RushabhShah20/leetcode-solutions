# Problem: Prime Number of Set Bits in Binary Representation
# Link to the problem: https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/
class Solution:
    def isPrime(self, n: int) -> bool:
        if n == 1:
            return False
        i: int = 2
        while i * i <= n:
            if n % i == 0:
                return False
            i += 1
        return True

    def setBits(self, n: int) -> int:
        ans: int = 0
        while n > 0:
            n &= n - 1
            ans += 1
        return ans

    def countPrimeSetBits(self, left: int, right: int) -> int:
        ans: int = 0
        for i in range(left, right + 1):
            if self.isPrime(self.setBits(i)):
                ans += 1
        return ans
