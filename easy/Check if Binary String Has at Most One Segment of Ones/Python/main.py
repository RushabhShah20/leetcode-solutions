# Problem: Check if Binary String Has at Most One Segment of Ones
# Link to the problem: https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/
class Solution:
    def checkOnesSegment(self, s: str) -> bool:
        count: int = 0
        for i in range(1, len(s)):
            if s[i] == "0":
                count += 1
            if s[i] == "1" and count != 0:
                return False
        return True
