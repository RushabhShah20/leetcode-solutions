# Problem: Count Numbers with Unique Digits
# Link to the problem: https://leetcode.com/problems/count-numbers-with-unique-digits/
class Solution:
    def countNumbersWithUniqueDigits(self, n: int) -> int:
        if n == 0:
            return 1
        if n == 1:
            return 10
        total: int = 10
        current: int = 9
        for i in range(2, n + 1):
            current *= 10 - (i - 1)
            total += current
        return total
