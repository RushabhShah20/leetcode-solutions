# Problem: Counting Bits
# Link to the problem: https://leetcode.com/problems/counting-bits/
class Solution:
    def countBits(self, n: int) -> List[int]:
        ans: List[int] = [0] * (n + 1)
        for i in range(1, n + 1):
            ans[i] = ans[i >> 1] + (i & 1)
        return ans
