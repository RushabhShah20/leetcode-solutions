# Problem: Divide an Array Into Subarrays With Minimum Cost I
# Link to the problem: https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-i/
class Solution:
    def minimumCost(self, nums: List[int]) -> int:
        n: int = len(nums)
        m1: int = 51
        m2: int = 51
        for i in range(1, n):
            if nums[i] < m1:
                m2 = m1
                m1 = nums[i]
            elif nums[i] < m2:
                m2 = nums[i]
        ans: int = nums[0] + m1 + m2
        return ans
