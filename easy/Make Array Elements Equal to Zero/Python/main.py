# Problem: Make Array Elements Equal to Zero
# Link to the problem: https://leetcode.com/problems/make-array-elements-equal-to-zero/
class Solution:
    def countValidSelections(self, nums: List[int]) -> int:
        n: int = len(nums)
        ans: int = 0
        sum: int = 0
        for num in nums:
            sum += num
        leftSum: int = 0
        rightSum: int = sum
        for i in range(0, n):
            if nums[i] == 0:
                if leftSum - rightSum >= 0 and leftSum - rightSum <= 1:
                    ans += 1
                if rightSum - leftSum >= 0 and rightSum - leftSum <= 1:
                    ans += 1
            else:
                leftSum += nums[i]
                rightSum -= nums[i]
        return ans
