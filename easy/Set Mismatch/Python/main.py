# Problem: Set Mismatch
# Link to the problem: https://leetcode.com/problems/set-mismatch/
class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        freq: List[int] = [0] * len(nums)
        for i in range(0, len(nums)):
            freq[nums[i] - 1] += 1
        ans: List[int] = [0] * 2
        for i in range(0, len(freq)):
            if freq[i] == 2:
                ans[0] = i + 1
            if freq[i] == 0:
                ans[1] = i + 1
        return ans
