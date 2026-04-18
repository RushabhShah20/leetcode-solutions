# Problem: Mirror Distance of an Integer
# Link to the problem: https://leetcode.com/problems/mirror-distance-of-an-integer/
class Solution:
    def rev(self, n: int) -> int:
        ans: int = 0
        while n > 0:
            ans = ans * 10 + n % 10
            n //= 10
        return ans

    def mirrorDistance(self, n: int) -> int:
        m: int = self.rev(n)
        ans: int = abs(m - n)
        return ans
