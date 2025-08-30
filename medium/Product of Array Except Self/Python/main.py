# Problem: Product of Array Except Self
# Link to the problem: https://leetcode.com/problems/product-of-array-except-self/
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n: int = len(nums)
        prefix: List[int] = [0] * n
        suffix: List[int] = [0] * n
        ans: List[int] = [0] * n
        prefix[0] = 1
        for i in range(1, n):
            if prefix[i - 1] == 0:
                prefix[i] = 0
            else:
                prefix[i] = prefix[i - 1] * nums[i - 1]
        suffix[n - 1] = 1
        for i in range(n - 2, -1, -1):
            if suffix[i + 1] == 0:
                suffix[i] = 0
            else:
                suffix[i] = suffix[i + 1] * nums[i + 1]
        for i in range(0, n):
            ans[i] = prefix[i] * suffix[i]
        return ans
