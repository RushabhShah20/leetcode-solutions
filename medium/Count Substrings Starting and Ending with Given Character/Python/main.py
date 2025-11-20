# Problem: Count Substrings Starting and Ending with Given Character
# Link to the problem: https://leetcode.com/problems/count-substrings-starting-and-ending-with-given-character/
class Solution:
    def countSubstrings(self, s: str, c: str) -> int:
        m: int = 0
        for ch in s:
            if ch == c:
                m += 1
        ans: int = (m * (m + 1)) // 2
        return ans
