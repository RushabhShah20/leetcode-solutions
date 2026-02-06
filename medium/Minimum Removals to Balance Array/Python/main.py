# Problem: Minimum Removals to Balance Array
# Link to the problem: https://leetcode.com/problems/minimum-removals-to-balance-array/
class Solution:
    def minRemoval(self, nums: List[int], k: int) -> int:
        n: int = len(nums)
        i: int = 0
        ans: int = 0
        nums.sort()
        for j in range(0, n):
            while nums[j] > nums[i] * k:
                i += 1
            ans = max(ans, j - i + 1)
        ans = n - ans
        return ans
