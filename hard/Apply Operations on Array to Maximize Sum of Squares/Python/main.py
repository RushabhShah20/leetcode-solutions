# Problem: Apply Operations on Array to Maximize Sum of Squares
# Link to the problem: https://leetcode.com/problems/apply-operations-on-array-to-maximize-sum-of-squares/
class Solution:
    def maxSum(self, nums: List[int], k: int) -> int:
        n: int = len(nums)
        m: int = 1000000007
        a: list[int] = [0] * 30
        for i in range(0, n):
            for j in range(0, 30):
                a[j] += nums[i] >> j & 1
        ans: int = 0
        for i in range(0, k):
            x: int = 0
            for j in range(29, -1, -1):
                if a[j] > 0:
                    x |= 1 << j
                    a[j] -= 1
            ans = (ans + x * x) % m
        return ans
