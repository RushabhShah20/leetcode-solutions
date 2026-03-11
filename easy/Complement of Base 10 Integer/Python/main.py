# Problem: Complement of Base 10 Integer
# Link to the problem: https://leetcode.com/problems/complement-of-base-10-integer/
class Solution:
    def bitwiseComplement(self, n: int) -> int:
        if n == 0:
            return 1
        x: int = 1
        while x < n:
            x = (x << 1) | 1
        ans: int = n ^ x
        return ans
