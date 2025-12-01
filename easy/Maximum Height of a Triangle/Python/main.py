# Problem: Maximum Height of a Triangle
# Link to the problem: https://leetcode.com/problems/maximum-height-of-a-triangle/
class Solution:
    def maxHeightOfTriangle(self, red: int, blue: int) -> int:
        x: int = 0
        y: int = 0
        a: int = red
        b: int = blue
        i: int = 1
        while a >= 0 and b >= 0:
            if i % 2 == 0:
                a -= i
                x += 1
            else:
                b -= i
                x += 1
            i += 1
        a = red
        b = blue
        i = 1
        while a >= 0 and b >= 0:
            if i % 2 == 0:
                b -= i
                y += 1
            else:
                a -= i
                y += 1
            i += 1
        ans: int = max(x - 1, y - 1)
        return ans
