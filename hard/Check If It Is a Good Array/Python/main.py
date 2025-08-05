# Problem: Check If It Is a Good Array
# Link to the problem: https://leetcode.com/problems/check-if-it-is-a-good-array/
class Solution:
    def gcd(self, a: int, b: int) -> int:
        return a if b == 0 else self.gcd(b, a % b)

    def isGoodArray(self, nums: List[int]) -> bool:
        ans = nums[0]
        for i in range(1, len(nums)):
            ans = self.gcd(ans, nums[i])
            if ans == 1:
                break
        return True if ans == 1 else False
