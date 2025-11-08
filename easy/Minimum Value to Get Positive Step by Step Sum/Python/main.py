# Problem: Minimum Value to Get Positive Step by Step Sum
# Link to the problem: https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/
class Solution:
    def minStartValue(self, nums: List[int]) -> int:
        ans: int = 0
        sum: int = 0
        for num in nums:
            sum += num
            if sum <= 0:
                ans += 1 - sum
                sum += 1 - sum
        return 1 if (ans == 0) else (ans)
