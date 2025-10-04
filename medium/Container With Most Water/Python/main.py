# Problem: Container With Most Water
# Link to the problem: https://leetcode.com/problems/container-with-most-water/
class Solution:
    def maxArea(self, height: List[int]) -> int:
        ans: int = 0
        n: int = len(height)
        left: int = 0
        right: int = n - 1
        while left <= right:
            vol: int = (right - left) * min(height[left], height[right])
            ans = max(ans, vol)
            if height[left] <= height[right]:
                left += 1
            else:
                right -= 1
        return ans
