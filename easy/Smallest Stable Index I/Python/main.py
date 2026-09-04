# Problem: Smallest Stable Index I
# Link to the problem: https://leetcode.com/problems/smallest-stable-index-i/
class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        n: int = len(nums)
        mn: list[int] = [0] * (n)
        mx: list[int] = [0] * (n)
        mx[0] = nums[0]
        for i in range(1, n):
            mx[i] = max(mx[i - 1], nums[i])
        mn[n - 1] = nums[n - 1]
        for i in range(n - 2, -1, -1):
            mn[i] = min(mn[i + 1], nums[i])
        for i in range(0, n):
            if mx[i] - mn[i] <= k:
                return i
        return -1
