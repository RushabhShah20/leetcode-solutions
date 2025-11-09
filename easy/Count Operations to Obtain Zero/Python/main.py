# Problem: Count Operations to Obtain Zero
# Link to the problem: https://leetcode.com/problems/count-operations-to-obtain-zero/
class Solution:
    def countOperations(self, num1: int, num2: int) -> int:
        ans: int = 0
        a: int = max(num1, num2)
        b: int = min(num1, num2)
        while a > 0 and b > 0:
            ans += a // b
            a %= b
            temp: int = a
            a = b
            b = temp
        return ans
