# Problem: Find Greatest Common Divisor of Array
# Link to the problem: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
class Solution:
    def gcd(self, a: int, b: int) -> int:
        return a if b == 0 else self.gcd(b, a % b)

    def findGCD(self, nums: List[int]) -> int:
        maxVal: int = 0
        minVal: int = 1001
        for num in nums:
            maxVal = max(maxVal, num)
            minVal = min(minVal, num)
        ans: int = self.gcd(maxVal, minVal)
        return ans
