# Problem: Minimum Difference Between Highest and Lowest of K Scores
# Link to the problem: https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/
class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        n: int = len(nums)
        nums.sort()
        ans: int = 100001
        for i in range(0, n - k + 1):
            ans = min(ans, nums[i + k - 1] - nums[i])
        return ans
