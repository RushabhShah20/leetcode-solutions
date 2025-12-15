# Problem: Trapping Rain Water
# Link to the problem: https://leetcode.com/problems/trapping-rain-water/
class Solution:
    def trap(self, height: List[int]) -> int:
        i: int = 0
        left_max: int = height[0]
        ans: int = 0
        j: int = len(height) - 1
        right_max: int = height[j]
        while i < j:
            if left_max <= right_max:
                ans += left_max - height[i]
                i += 1
                left_max = max(left_max, height[i])
            else:
                ans += right_max - height[j]
                j -= 1
                right_max = max(right_max, height[j])
        return ans
