# Problem: Convert Integer to the Sum of Two No-Zero Integers
# Link to the problem: https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/
class Solution:
    def isNonZero(self, n: int) -> bool:
        while n > 0:
            if n % 10 == 0:
                return False
            n //= 10
        return True

    def getNoZeroIntegers(self, n: int) -> List[int]:
        for i in range(1, n + 1):
            if self.isNonZero(i) and self.isNonZero(n - i):
                return [i, n - i]
        return []
