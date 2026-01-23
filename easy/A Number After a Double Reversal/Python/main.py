# Problem: A Number After a Double Reversal
# Link to the problem: https://leetcode.com/problems/a-number-after-a-double-reversal/
class Solution:
    def isSameAfterReversals(self, num: int) -> bool:
        if num == 0:
            return True
        if num % 10 == 0:
            return False
        else:
            return True
