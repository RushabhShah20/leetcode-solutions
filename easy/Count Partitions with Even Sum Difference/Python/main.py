# Problem: Count Partitions with Even Sum Difference
# Link to the problem: https://leetcode.com/problems/count-partitions-with-even-sum-difference/
class Solution:
    def countPartitions(self, nums: List[int]) -> int:
        sum: int = 0
        ans: int = len(nums) - 1
        for num in nums:
            sum += num
        if sum % 2 == 0:
            return ans
        else:
            return 0
