# Problem: Minimum Amount of Time to Fill Cups
# Link to the problem: https://leetcode.com/problems/minimum-amount-of-time-to-fill-cups/
class Solution:
    def smallest(self, a: int, b: int, c: int) -> int:
        if a < b:
            if a < c:
                return a
            else:
                return c
        else:
            if b < c:
                return b
            else:
                return c

    def fillCups(self, amount: List[int]) -> int:
        ans: int = 0
        a: int = amount[0]
        b: int = amount[1]
        c: int = amount[2]
        while a > 0 or b > 0 or c > 0:
            if self.smallest(a, b, c) == a:
                b -= 1
                c -= 1
            elif self.smallest(a, b, c) == b:
                a -= 1
                c -= 1
            else:
                a -= 1
                b -= 1
            ans += 1
        return ans
