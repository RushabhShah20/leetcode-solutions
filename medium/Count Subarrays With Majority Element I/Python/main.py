# Problem: Count Subarrays With Majority Element I
# Link to the problem: https://leetcode.com/problems/count-subarrays-with-majority-element-i/
class Solution:
    def countMajoritySubarrays(self, nums: List[int], target: int) -> int:
        ans: int = 0
        n: int = len(nums)
        for k in range(1, n + 1):
            count: int = 0
            for i in range(0, n):
                if i >= k:
                    if nums[i] == target:
                        count += 1
                    if nums[i - k] == target:
                        count -= 1
                else:
                    if nums[i] == target:
                        count += 1
                if i >= k - 1:
                    if 2 * count > k:
                        ans += 1
        return ans
