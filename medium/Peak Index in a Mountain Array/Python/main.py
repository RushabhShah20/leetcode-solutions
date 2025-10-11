# Problem: Peak Index in a Mountain Array
# Link to the problem: https://leetcode.com/problems/peak-index-in-a-mountain-array/
class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        start: int = 0
        end: int = len(arr) - 1
        while start < end:
            mid: int = start + (end - start) // 2
            if arr[mid] < arr[mid + 1]:
                start = mid + 1
            else:
                end = mid
        return start
