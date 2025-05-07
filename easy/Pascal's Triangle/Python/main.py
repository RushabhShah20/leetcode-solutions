# Problem: Pascal's Triangle
# Link to the problem: https://leetcode.com/problems/pascals-triangle/
class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        ans: List[List[int]] = []
        if numRows <= 0:
            return ans
        pre: List[int] = []
        pre.append(1)
        ans.append(pre)
        for i in range(2, numRows + 1, 1):
            cur: List[int] = []
            cur.append(1)
            for j in range(0, len(pre) - 1, 1):
                cur.append(pre[j] + pre[j + 1])
            cur.append(1)
            ans.append(cur)
            pre = cur
        return ans
