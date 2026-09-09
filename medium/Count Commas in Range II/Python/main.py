# Problem: Count Commas in Range II
# Link to the problem: https://leetcode.com/problems/count-commas-in-range-ii/
class Solution:
    def countCommas(self, n: int) -> int:
        ans: int = 0
        x: int = 1000
        while x <= n:
            ans += n - x + 1
            x *= 1000
        return ans
