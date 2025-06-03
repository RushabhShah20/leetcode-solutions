# Problem: Valid Perfect Square
# Link to the problem: https://leetcode.com/problems/valid-perfect-square/
class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        s: int = 1
        e: int = num
        while s <= e:
            mid: int = s + (e - s) // 2
            if mid * mid == num:
                return True
            elif mid * mid > num:
                e = mid - 1
            else:
                s = mid + 1
        return False
