# Problem: Minimum Positive Sum Subarray
# Link to the problem: https://leetcode.com/problems/minimum-positive-sum-subarray/
class Solution:
    def minimumSumSubarray(self, nums: List[int], l: int, r: int) -> int:
        n: int = len(nums)
        z: int = 100001
        for i in range(0, n):
            x: int = 0
            for j in range(i, n):
                x += nums[j]
                y: int = j - i + 1
                if x > 0 and y >= l and y <= r:
                    z = min(z, x)
        ans: int = -1 if z == 100001 else z
        return ans
