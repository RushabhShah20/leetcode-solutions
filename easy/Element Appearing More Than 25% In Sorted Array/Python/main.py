# Problem: Element Appearing More Than 25% In Sorted Array
# Link to the problem: https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/
class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        n: int = len(arr)
        m: int = n // 4
        for i in range(0, n - m):
            if arr[i] == arr[i + m]:
                return arr[i]
        return -1
