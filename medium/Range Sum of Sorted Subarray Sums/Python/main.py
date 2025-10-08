# Problem: Range Sum of Sorted Subarray Sums
# Link to the problem: https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/
class Solution:
    def rangeSum(self, nums: List[int], n: int, left: int, right: int) -> int:
        ans: int = 0
        mod: int = 1000000007
        prefixSum: List[int] = []
        for i in range(0, len(nums)):
            sum: int = nums[i]
            prefixSum.append(sum)
            for j in range(i + 1, len(nums)):
                sum = (sum + nums[j]) % mod
                prefixSum.append(sum)
        prefixSum.sort()
        for i in range(left - 1, right):
            ans = (ans + prefixSum[i]) % mod
        return ans
