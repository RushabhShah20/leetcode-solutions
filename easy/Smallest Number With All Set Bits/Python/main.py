# Problem: Smallest Number With All Set Bits
# Link to the problem: https://leetcode.com/problems/smallest-number-with-all-set-bits/
class Solution:
    def toBinary(self, n: int) -> List[int]:
        ans: List[int] = []
        while n > 0:
            ans.append(n % 2)
            n //= 2
        return ans

    def smallestNumber(self, n: int) -> int:
        binary: List[int] = self.toBinary(n)
        a: List[int] = [0] * len(binary)
        for i in range(0, len(a)):
            a[i] = 1
        ans: int = 0
        for i in range(0, len(a)):
            ans += pow(2, i) * a[i]
        return ans
