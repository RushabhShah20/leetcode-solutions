# Problem: Count of Matches in Tournament
# Link to the problem: https://leetcode.com/problems/count-of-matches-in-tournament/
class Solution:
    def numberOfMatches(self, n: int) -> int:
        ans: int = 0
        m: int = n
        while m > 1:
            if m % 2 == 0:
                ans += m // 2
                m //= 2
            else:
                ans += (m - 1) // 2
                m = ((m - 1) // 2) + 1
        return ans
