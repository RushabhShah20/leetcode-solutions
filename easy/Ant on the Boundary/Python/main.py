# Problem: Ant on the Boundary
# Link to the problem: https://leetcode.com/problems/ant-on-the-boundary/
class Solution:
    def returnToBoundaryCount(self, nums: List[int]) -> int:
        ans: int = 0
        count: int = 0
        for i in range(0, len(nums)):
            count += nums[i]
            if count == 0:
                ans += 1
        return ans
