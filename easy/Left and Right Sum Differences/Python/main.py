# Problem: Left and Right Sum Differences
# Link to the problem: https://leetcode.com/problems/left-and-right-sum-differences/
class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        n: int = len(nums)
        ans, left, right = [0] * n, [0] * n, [0] * n
        sum: int = 0
        for i in range(0, n, 1):
            left[i] = sum
            sum += nums[i]
        sum = 0
        for i in range(n - 1, -1, -1):
            right[i] = sum
            sum += nums[i]
        for i in range(0, n, 1):
            ans[i] = abs(left[i] - right[i])
        return ans
