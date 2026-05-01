# Problem: Rotate Function
# Link to the problem: https://leetcode.com/problems/rotate-function/
class Solution:
    def maxRotateFunction(self, nums: List[int]) -> int:
        n: int = len(nums)
        x: int = 0
        y: int = 0
        for i in range(0, n):
            x += nums[i]
            y += i * nums[i]
        ans: int = y
        for i in range(n - 1, -1, -1):
            y = y + x - n * nums[i]
            ans = max(ans, y)
        return ans
