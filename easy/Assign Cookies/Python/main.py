# Problem: Assign Cookies
# Link to the problem: https://leetcode.com/problems/assign-cookies/
class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        g.sort()
        s.sort()
        i: int = 0
        j: int = 0
        ans: int = 0
        n: int = len(g)
        m: int = len(s)
        while j < m and i < n:
            if g[i] <= s[j]:
                ans += 1
                i += 1
            j += 1
        return ans
