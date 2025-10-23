# Problem: Check If Digits Are Equal in String After Operations I
# Link to the problem: https://leetcode.com/problems/check-if-digits-are-equal-in-string-after-operations-i/
class Solution:
    def hasSameDigits(self, s: str) -> bool:
        while len(s) != 2:
            t: str = ""
            for i in range(0, len(s) - 1):
                x: int = int(s[i])
                y: int = int(s[i + 1])
                z: int = (x + y) % 10
                t += str(z)
            s = t
        return s[0] == s[1]
