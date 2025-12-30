# Problem: K Radius Subarray Averages
# Link to the problem: https://leetcode.com/problems/k-radius-subarray-averages/
class Solution:
    def getAverages(self, nums: List[int], k: int) -> List[int]:
        n: int = len(nums)
        m: int = (2 * k) + 1
        ans: List[int] = [-1] * n
        sum: int = 0
        for i in range(0, n):
            if i >= m:
                sum += nums[i]
                sum -= nums[i - m]
            else:
                sum += nums[i]
            if i >= m - 1:
                ans[i - k] = sum // m
        return ans
