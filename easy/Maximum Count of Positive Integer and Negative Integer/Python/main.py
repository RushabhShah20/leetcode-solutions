# Problem: Maximum Count of Positive Integer and Negative Integer
# Link to the problem: https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        n: int = len(nums)
        start: int = 0
        end: int = n - 1
        maxNeg: int = -1
        minPos: int = n
        while start <= end:
            mid: int = start + (end - start) // 2
            if nums[mid] > 0:
                minPos = mid
                end = mid - 1
            else:
                start = mid + 1
        start = 0
        end = n - 1
        while start <= end:
            mid: int = start + (end - start) // 2
            if nums[mid] < 0:
                maxNeg = mid
                start = mid + 1
            else:
                end = mid - 1
        maxNeg += 1
        minPos = n - minPos
        ans: int = max(maxNeg, minPos)
        return ans
