# Problem: Find Missing and Repeated Values
# Link to the problem: https://leetcode.com/problems/find-missing-and-repeated-values/
class Solution:
    def findMissingAndRepeatedValues(self, grid: List[List[int]]) -> List[int]:
        freq: List[int] = [0] * (len(grid) * len(grid[0]))
        ans: List[int] = [None] * 2
        for i in range(0, len(grid), 1):
            for j in range(0, len(grid[0]), 1):
                freq[grid[i][j] - 1] += 1

        for i in range(0, len(freq), 1):
            if freq[i] == 0:
                ans[1] = i + 1
            if freq[i] == 2:
                ans[0] = i + 1
        return ans
