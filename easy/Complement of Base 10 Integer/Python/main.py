# Problem: Complement of Base 10 Integer
# Link to the problem: https://leetcode.com/problems/complement-of-base-10-integer/
class Solution:
    def toBinary(self, n: int) -> List[int]:
        ans: List[int] = []
        while n > 0:
            rem: int = n % 2
            ans.append(rem)
            n //= 2
        return ans

    def complement(self, res: List[int]) -> List[int]:
        for i in range(0, len(res)):
            if res[i] == 1:
                res[i] = 0
            elif res[i] == 0:
                res[i] = 1
        return res

    def bitwiseComplement(self, n: int) -> int:
        if n == 0:
            return 1
        else:
            ans: int = 0
            binary: List[int] = self.toBinary(n)
            com: List[int] = self.complement(binary)
            for i in range(0, len(com)):
                ans += pow(2, i) * com[i]
            return ans
