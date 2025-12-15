# Problem: Find the Value of the Partition
# Link to the problem: https://leetcode.com/problems/find-the-value-of-the-partition/
class Solution:
    def findValueOfPartition(self, nums: List[int]) -> int:
        nums.sort()
        ans: int = 1000000000
        n: int = len(nums)
        for i in range(0, n - 1):
            ans = min(ans, nums[i + 1] - nums[i])
        return ans
