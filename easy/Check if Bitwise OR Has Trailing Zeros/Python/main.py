# Problem: Check if Bitwise OR Has Trailing Zeros
# Link to the problem: https://leetcode.com/problems/check-if-bitwise-or-has-trailing-zeros/
class Solution:
    def hasTrailingZeros(self, nums: List[int]) -> bool:
        count: int = 0
        for num in nums:
            if num % 2 == 0:
                count += 1
            if count == 2:
                return True
        return False
