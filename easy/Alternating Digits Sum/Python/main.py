# Problem: Alternating Digits Sum
# Link to the problem: https://leetcode.com/problems/alternating-digit-sum/
class Solution:
    def split(self, n: int) -> List[int]:
        res: List[int] = []
        while n > 0:
            res.append(n % 10)
            n //= 10
        return res

    def alternateDigitSum(self, n: int) -> int:
        ans: int = 0
        digits: List[int] = self.split(n)
        for i in range(len(digits) - 1, -1, -1):
            if len(digits) % 2 == 0:
                if i % 2 != 0:
                    ans += digits[i]
                else:
                    ans -= digits[i]
            else:
                if i % 2 == 0:
                    ans += digits[i]
                else:
                    ans -= digits[i]
        return ans
