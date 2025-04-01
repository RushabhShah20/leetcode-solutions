# Problem: Minimum Element After Replacement With Digit Sum
# Link to the problem: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/
class Solution:
    def digit_sum(self, n: int) -> int:
        sum: int = 0
        while n > 0:
            sum += n % 10
            n //= 10
        return sum

    def minElement(self, nums: List[int]) -> int:
        min_elem = float("inf")
        for num in nums:
            num = self.digit_sum(num)
            min_elem = min(min_elem, num)

        return min_elem
