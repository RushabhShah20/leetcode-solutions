# Problem: Squares of a Sorted Array
# Link to the problem: https://leetcode.com/problems/squares-of-a-sorted-array/
class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        n: int = len(nums)
        ans: List[int] = [0] * n
        l: int = 0
        r: int = n - 1
        i: int = n - 1
        while l <= r:
            x: int = nums[l] * nums[l]
            y: int = nums[r] * nums[r]
            if x > y:
                ans[i] = x
                l += 1
            else:
                ans[i] = y
                r -= 1
            i -= 1
        return ans
