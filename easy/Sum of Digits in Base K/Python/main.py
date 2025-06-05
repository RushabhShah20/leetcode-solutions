# Problem: Sum of Digits in Base K
# Link to the problem: https://leetcode.com/problems/sum-of-digits-in-base-k/
class Solution:
    def sumBase(self, n: int, k: int) -> int:
        sum: int = 0
        while n > 0:
            sum += n % k
            n //= k
        return sum
