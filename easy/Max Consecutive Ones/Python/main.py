# Problem: Max Consecutive Ones
# Link to the problem: https://leetcode.com/problems/max-consecutive-ones/
class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        ans: int = 0
        count: int = 0
        for i in range(0, len(nums), 1):
            if nums[i] == 1:
                count += 1
                ans = max(ans, count)
            else:
                count = 0
        return ans
