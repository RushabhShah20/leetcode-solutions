# Problem: Minimum Operations to Exceed Threshold Value I
# Link to the problem: https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i/
class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        ans: int = 0
        for i in range(0, len(nums), 1):
            if nums[i] < k:
                ans += 1
        return ans
