# Problem: Construct the Minimum Bitwise Array II
# Link to the problem: https://leetcode.com/problems/construct-the-minimum-bitwise-array-ii/
class Solution:
    def minBitwiseArray(self, nums: List[int]) -> List[int]:
        n: int = len(nums)
        ans: List[int] = [0] * n
        for i in range(0, n):
            if nums[i] % 2 == 0:
                ans[i] = -1
            else:
                ans[i] = nums[i] - (((nums[i] + 1) & (-nums[i] - 1)) // 2)
        return ans
