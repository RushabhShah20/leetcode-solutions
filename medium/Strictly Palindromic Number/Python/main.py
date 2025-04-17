# Problem: Strictly Palindromic Number
# Link to the problem: https://leetcode.com/problems/strictly-palindromic-number/
class Solution:
    def nInary(self, n: int, base: int):
        result: int = 0
        mul: int = 1
        while n > 0:
            result += (n % base) * mul
            n //= base
            mul *= 10
        return result

    def isPalindrome(self, n: int) -> bool:
        rev: int = 0
        org: int = n
        while n > 0:
            rev = rev * 10 + n % 10
            n //= 10
        return org == rev

    def isStrictlyPalindromic(self, n: int) -> bool:
        ans: bool = False
        for i in range(2, n - 1, 1):
            num = self.nInary(n, i)
            if self.isPalindrome(num):
                ans = True
            else:
                ans = False
                break
        return ans
