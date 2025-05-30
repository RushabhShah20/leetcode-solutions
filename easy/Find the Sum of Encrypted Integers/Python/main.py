# Problem: Find the Sum of Encrypted Integers
# Link to the problem: https://leetcode.com/problems/find-the-sum-of-encrypted-integers/
class Solution:
    def maxDigitOfNum(self, num: int) -> int:
        maxDigit: int = 0
        while num > 0:
            maxDigit = max(maxDigit, num % 10)
            num //= 10
        return maxDigit

    def numOfDigits(self, num: int) -> int:
        count: int = 0
        while num > 0:
            count += 1
            num //= 10
        return count

    def encrypt(self, num: int) -> int:
        ans: int = 0
        maxDigit: int = self.maxDigitOfNum(num)
        numDigits: int = self.numOfDigits(num)
        for i in range(1, numDigits + 1):
            ans += maxDigit * pow(10, i - 1)
        return ans

    def sumOfEncryptedInt(self, nums: List[int]) -> int:
        ans: int = 0
        for i in range(0, len(nums)):
            nums[i] = self.encrypt(nums[i])
            ans += nums[i]
        return ans
