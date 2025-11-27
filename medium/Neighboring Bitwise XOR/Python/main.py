# Problem: Neighboring Bitwise XOR
# Link to the problem: https://leetcode.com/problems/neighboring-bitwise-xor/
class Solution:
    def doesValidArrayExist(self, derived: List[int]) -> bool:
        ans: int = 1
        for derive in derived:
            ans ^= derive
        if ans == 1:
            return True
        else:
            return False
