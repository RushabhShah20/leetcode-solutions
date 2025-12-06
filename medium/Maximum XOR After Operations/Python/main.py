# Problem: Maximum XOR After Operations
# Link to the problem: https://leetcode.com/problems/maximum-xor-after-operations/
class Solution:
    def maximumXOR(self, nums: List[int]) -> int:
        ans: int = 0
        for num in nums:
            ans |= num
        return ans
