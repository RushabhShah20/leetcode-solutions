# Problem: Maximum Difference Between Increasing Elements
# Link to the problem: https://leetcode.com/problems/maximum-difference-between-increasing-elements/
class Solution:
    def maximumDifference(self, nums: List[int]) -> int:
        n: int = len(nums)
        res: int = 0
        pre: List[int] = [0] * n
        suff: List[int] = [0] * n
        pre[0] = nums[0]
        suff[n - 1] = nums[n - 1]
        for i in range(1, n):
            pre[i] = min(pre[i - 1], nums[i])
        for i in range(n - 2, -1, -1):
            suff[i] = max(suff[i + 1], nums[i])
        for i in range(0, n):
            res = max(res, suff[i] - pre[i])
        if res == 0:
            return -1
        return res
