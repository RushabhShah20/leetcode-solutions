# Problem: Range Addition II
# Link to the problem: https://leetcode.com/problems/range-addition-ii/
class Solution:
    def maxCount(self, m: int, n: int, ops: List[List[int]]) -> int:
        for op in ops:
            m = min(m, op[0])
            n = min(n, op[1])
        ans: int = m * n
        return ans
