# Problem: Count Distinct Numbers on Board
# Link to the problem: https://leetcode.com/problems/count-distinct-numbers-on-board/
class Solution:
    def distinctIntegers(self, n: int) -> int:
        return 1 if n == 1 else n - 1
