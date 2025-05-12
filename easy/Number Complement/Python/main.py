# Problem: Number Complement
# Link to the problem: https://leetcode.com/problems/number-complement/
class Solution:
    def toBinary(self, n: int) -> List[int]:
        ans: List[int] = []
        while n > 0:
            rem = n % 2
            ans.append(rem)
            n //= 2
        return ans

    def complement(self, res: List[int]) -> List[int]:
        for i in range(0, len(res), 1):
            if res[i] == 1:
                res[i] = 0
            elif res[i] == 0:
                res[i] = 1
        return res

    def findComplement(self, num: int) -> int:
        ans: int = 0
        binary: List[int] = self.toBinary(num)
        com: List[int] = self.complement(binary)
        for i in range(0, len(com), 1):
            ans += pow(2, i) * com[i]
        return ans
