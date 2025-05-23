# Problem: Find Indices With Index and Value Difference I
# Link to the problem: https://leetcode.com/problems/find-indices-with-index-and-value-difference-i/
class Solution:
    def findIndices(
        self, nums: List[int], indexDifference: int, valueDifference: int
    ) -> List[int]:
        ans: List[int] = [-1] * 2
        for i in range(0, len(nums), 1):
            for j in range(0, len(nums), 1):
                if (
                    abs(i - j) >= indexDifference
                    and abs(nums[i] - nums[j]) >= valueDifference
                ):
                    ans[0] = i
                    ans[1] = j
                    break
        return ans
