# Problem: Find the Largest Almost Missing Integer
# Link to the problem: https://leetcode.com/problems/find-the-largest-almost-missing-integer/
class Solution:
    def largestInteger(self, nums: List[int], k: int) -> int:
        n: int = len(nums)
        ans: int = -1
        if n == k:
            for i in range(0, n):
                ans = max(ans, nums[i])
            return ans
        a: List[int] = [0] * 51
        for i in range(0, n):
            a[nums[i]] += 1
        if k == 1:
            for i in range(50, -1, -1):
                if a[i] == 1:
                    return i
            return -1
        if a[nums[0]] == 1:
            ans = max(ans, nums[0])
        if a[nums[n - 1]] == 1:
            ans = max(ans, nums[n - 1])
        return ans
