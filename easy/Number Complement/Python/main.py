# Problem: Number Complement
# Link to the problem: https://leetcode.com/problems/number-complement/
class Solution:
    def findComplement(self, num: int) -> int:
        if num == 0:
            return 1
        x: int = 1
        while x < num:
            x = (x << 1) | 1
        ans: int = num ^ x
        return ans
