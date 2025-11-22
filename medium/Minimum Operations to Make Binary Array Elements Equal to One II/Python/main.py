# Problem: Minimum Operations to Make Binary Array Elements Equal to One II
# Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-ii/
class Solution:
    def minOperations(self, nums: List[int]) -> int:
        ans: int = 0
        for num in nums:
            if ans % 2 == 0:
                if num == 0:
                    ans += 1
            else:
                if num == 1:
                    ans += 1
        return ans
