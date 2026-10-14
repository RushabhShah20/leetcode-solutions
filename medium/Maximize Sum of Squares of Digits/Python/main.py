# Problem: Maximize Sum of Squares of Digits
# Link to the problem: https://leetcode.com/problems/maximize-sum-of-squares-of-digits/
class Solution:
    def maxSumOfSquares(self, num: int, sum: int) -> str:
        if sum < 1 or sum > 9 * num:
            return ""
        x: int = sum // 9
        y: int = sum % 9
        ans: str = "9" * x
        num -= x
        if y > 0:
            ans += str(y)
            num -= 1
        ans += "0" * num
        return ans
