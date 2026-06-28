# Problem: Maximum Element After Decreasing and Rearranging
# Link to the problem: https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/
class Solution:
    def maximumElementAfterDecrementingAndRearranging(self, arr: List[int]) -> int:
        arr.sort()
        n: int = len(arr)
        ans: int = 1
        for i in range(1, n):
            if arr[i] >= ans + 1:
                ans += 1
        return ans
