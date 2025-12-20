# Problem: Delete Columns to Make Sorted
# Link to the problem: https://leetcode.com/problems/delete-columns-to-make-sorted/
class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
        n: int = len(strs)
        m: int = len(strs[0])
        ans: int = 0
        for j in range(0, m):
            for i in range(0, n - 1):
                if (strs[i][j]) > (strs[i + 1][j]):
                    ans += 1
                    break
        return ans
