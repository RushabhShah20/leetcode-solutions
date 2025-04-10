# Problem: Sum of Squares of Special Elements
# Link to the problem: https://leetcode.com/problems/sum-of-squares-of-special-elements/
class Solution:
    def sumOfSquares(self, nums: List[int]) -> int:
        ans: int = 0
        for i in range(0, len(nums), 1):
            if len(nums) % (i + 1) == 0:
                ans += (nums[i] * nums[i])
        return ans
