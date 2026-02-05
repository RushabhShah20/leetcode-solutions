# Problem: Transformed Array
# Link to the problem: https://leetcode.com/problems/transformed-array/
class Solution:
    def constructTransformedArray(self, nums: List[int]) -> List[int]:
        n: int = len(nums)
        ans: List[int] = [0] * n
        for i in range(0, n):
            ans[i] = nums[(i + nums[i] % n + n) % n]
        return ans
