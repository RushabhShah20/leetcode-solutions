# Problem: Valid Triangle Number
# Link to the problem: https://leetcode.com/problems/valid-triangle-number/
class Solution:
    def triangleNumber(self, nums: List[int]) -> int:
        ans: int = 0
        if len(nums) < 3:
            return ans
        nums.sort()
        for i in range(len(nums) - 1, 0, -1):
            r: int = i - 1
            l: int = 0
            while l < r:
                sum: int = nums[l] + nums[r]
                if sum > nums[i]:
                    ans += r - l
                    r -= 1
                else:
                    l += 1
        return ans
