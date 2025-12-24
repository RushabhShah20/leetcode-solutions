# Problem: Max Chunks To Make Sorted
# Link to the problem: https://leetcode.com/problems/max-chunks-to-make-sorted/
class Solution:
    def maxChunksToSorted(self, arr: List[int]) -> int:
        ans: int = 0
        n: int = len(arr)
        max: int = 0
        for i in range(0, n):
            if max < arr[i]:
                max = arr[i]
            if max == i:
                ans += 1
        return ans
