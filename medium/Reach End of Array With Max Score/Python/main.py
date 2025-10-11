# Problem: Reach End of Array With Max Score
# Link to the problem: https://leetcode.com/problems/reach-end-of-array-with-max-score/
class Solution:
    def findMaximumScore(self, nums: List[int]) -> int:
        ans: int = 0
        maxElement: int = 0
        for i in range(0, len(nums)):
            ans += maxElement
            maxElement = max(maxElement, (nums[i]))
        return ans
