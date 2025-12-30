# Problem: How Many Numbers Are Smaller Than the Current Number
# Link to the problem: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        n: int = len(nums)
        freq: List[int] = [0] * 101
        for num in nums:
            freq[num] += 1
        for i in range(1, 101):
            freq[i] += freq[i - 1]
        ans: List[int] = [0] * n
        for i in range(0, n):
            if nums[i] == 0:
                ans[i] = 0
            else:
                ans[i] = freq[nums[i] - 1]
        return ans
