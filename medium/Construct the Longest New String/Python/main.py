# Problem: Construct the Longest New String
# Link to the problem: https://leetcode.com/problems/construct-the-longest-new-string/
class Solution:
    def longestString(self, x: int, y: int, z: int) -> int:
        if x > y:
            return (2 * ((y) + (y + 1))) + (2 * z)
        elif x < y:
            return (2 * ((x) + (x + 1))) + (2 * z)
        else:
            return (2 * (x + y)) + (2 * z)
