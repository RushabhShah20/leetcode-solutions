# Problem: Rotate String
# Link to the problem: https://leetcode.com/problems/rotate-string/
class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        if len(s) != len(goal):
            return False
        else:
            s = s + s
            ans = goal in s
            return ans
