# Problem: Maximum Number of Jumps to Reach the Last Index
# Link to the problem: https://leetcode.com/problems/maximum-number-of-jumps-to-reach-the-last-index/
class Solution:
    def maximumJumps(self, nums: List[int], target: int) -> int:
        n: int = len(nums)
        dp: List[int] = [-1] * n
        dp[0] = 0
        for i in range(1, n):
            for j in range(0, i):
                if abs(nums[i] - nums[j]) <= target and dp[j] != -1:
                    dp[i] = max(dp[i], dp[j] + 1)
        ans: int = dp[n - 1]
        return ans
