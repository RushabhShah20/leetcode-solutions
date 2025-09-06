# Problem: Count Alternating Subarrays
# Link to the problem: https://leetcode.com/problems/count-alternating-subarrays/
class Solution:
    def countAlternatingSubarrays(self, nums: List[int]) -> int:
        ans: int = 0
        count: int = 1
        a: List[int] = []
        for i in range(1, len(nums)):
            if nums[i] != nums[i - 1]:
                count += 1
            else:
                a.append(count)
                count = 1
        a.append(count)
        for i in range(0, len(a)):
            ans += (a[i]) * ((a[i] + 1)) // 2
        return ans
