# Problem: Minimum One Bit Operations to Make Integers Zero
# Link to the problem: https://leetcode.com/problems/minimum-one-bit-operations-to-make-integers-zero/
class Solution:
    def minimumOneBitOperations(self, n: int) -> int:
        ans: int = 0
        while n > 0:
            ans ^= n
            n >>= 1
        return ans
