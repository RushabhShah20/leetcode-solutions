# Problem: Binary Number with Alternating Bits
# Link to the problem: https://leetcode.com/problems/binary-number-with-alternating-bits/
class Solution:
    def toBinary(self, n: int) -> List[int]:
        ans: List[int] = []
        while n > 0:
            ans.append(n % 2)
            n //= 2
        ans.reverse()
        return ans

    def isAlternating(self, ans: List[int]) -> bool:
        for i in range(0, len(ans)):
            if i % 2 == 0:
                if ans[i] == 0:
                    return False
            else:
                if ans[i] == 1:
                    return False
        return True

    def hasAlternatingBits(self, n: int) -> bool:
        ans: List[int] = self.toBinary(n)
        return self.isAlternating(ans)
