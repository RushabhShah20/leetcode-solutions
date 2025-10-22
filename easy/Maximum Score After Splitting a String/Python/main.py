# Problem: Maximum Score After Splitting a String
# Link to the problem: https://leetcode.com/problems/maximum-score-after-splitting-a-string/
class Solution:
    def maxScore(self, s: str) -> int:
        ans: int = 0
        pref: List[int] = [0] * len(s)
        if s[0] == "1":
            pref[0] = 0
        else:
            pref[0] = 1
        for i in range(1, len(s)):
            if s[i] == "1":
                pref[i] = pref[i - 1]
            else:
                pref[i] = pref[i - 1] + 1
        for i in range(0, len(s) - 1):
            score: int = pref[i] + ((len(s) - i - 1) - (pref[len(s) - 1] - pref[i]))
            ans = max(ans, score)
        return ans
