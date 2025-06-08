# Problem: Find All Numbers Disappeared in an Array
# Link to the problem: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        ans: List[int] = []
        freq: List[int] = [0] * (len(nums))
        for i in range(0, len(nums), 1):
            freq[nums[i] - 1] += 1
        for i in range(0, len(freq), 1):
            if freq[i] == 0:
                ans.append(i + 1)
        return ans
