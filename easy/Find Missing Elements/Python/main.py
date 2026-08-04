# Problem: Find Missing Elements
# Link to the problem: https://leetcode.com/problems/find-missing-elements/
class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        n: int = len(nums)
        mn: int = 101
        mx: int = 1
        for i in range(0, n):
            mn = min(mn, nums[i])
            mx = max(mx, nums[i])
        m: int = mx - mn + 1
        a: List[int] = [0] * m
        for i in range(0, n):
            a[nums[i] - mn] += 1
        ans: List[int] = []
        for i in range(0, m):
            if a[i] == 0:
                ans.append(i + mn)
        return ans
