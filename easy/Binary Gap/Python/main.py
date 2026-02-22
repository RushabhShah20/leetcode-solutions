# Problem: Binary Gap
# Link to the problem: https://leetcode.com/problems/binary-gap/
class Solution:
    def binaryGap(self, n: int) -> int:
        ans: int = 0
        x: int = 0
        y: int = -1
        while n > 0:
            if n % 2 == 1:
                if y != -1:
                    ans = max(ans, x - y)
                y = x
            n //= 2
            x += 1
        return ans
