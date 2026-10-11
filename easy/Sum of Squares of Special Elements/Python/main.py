# Problem: Sum of Squares of Special Elements
# Link to the problem: https://leetcode.com/problems/sum-of-squares-of-special-elements/
class Solution:
    def sumOfSquares(self, nums: List[int]) -> int:
        n: int = len(nums)
        ans: int = 0
        i: int = 1
        while i * i <= n:
            if n % i == 0:
                ans += nums[i - 1] * nums[i - 1]
                if i * i != n:
                    ans += nums[n / i - 1] * nums[n / i - 1]
            i += 1
        return ans
