# Problem: Maximize Consecutive Elements in an Array After Modification
# Link to the problem: https://leetcode.com/problems/maximize-consecutive-elements-in-an-array-after-modification/
class Solution:
    def maxSelectedElements(self, nums: List[int]) -> int:
        n: int = len(nums)
        nums.sort()
        a: List[int] = [0] * 1000001
        ans: int = 0
        for i in range(0, n):
            x: int = nums[i]
            a[x + 1] = max(a[x + 1], a[x] + 1)
            a[x] = max(a[x], a[x - 1] + 1)
            ans = max(ans, max(a[x], a[x + 1]))
        return ans
