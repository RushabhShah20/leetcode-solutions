# Problem: Count Subarrays With Majority Element II
# Link to the problem: https://leetcode.com/problems/count-subarrays-with-majority-element-ii/
class Solution:
    def countMajoritySubarrays(self, nums: List[int], target: int) -> int:
        n: int = len(nums)
        pre: List[int] = [0] * (2 * n + 1)
        pre[n] = 1
        x: int = n
        ans: int = 0
        y: int = 0
        for i in range(0, n):
            if nums[i] == target:
                y += pre[x]
                x += 1
                pre[x] += 1
            else:
                x -= 1
                y -= pre[x]
                pre[x] += 1
            ans += y
        return ans
