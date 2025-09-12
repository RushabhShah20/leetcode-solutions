# Problem: Count Number of Homogenous Substrings
# Link to the problem: https://leetcode.com/problems/count-number-of-homogenous-substrings/
class Solution:
    def countHomogenous(self, s: str) -> int:
        mod: int = 1000000007
        count: int = 1
        a: List[int] = []
        for i in range(1, len(s)):
            if s[i] == s[i - 1]:
                count += 1
            else:
                a.append(count)
                count = 1
        a.append(count)
        ans: int = 0
        for i in range(0, len(a)):
            ans += (((a[i]) * (a[i] + 1)) // 2) % mod
        return ans
