# Problem: Subarrays Distinct Element Sum of Squares I
# Link to the problem: https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/
class Solution:
    def sumCounts(self, nums: List[int]) -> int:
        n: int = len(nums)
        ans: int = 0
        for i in range(0, n):
            s: set[int] = set()
            for j in range(i, n):
                s.add(nums[j])
                ans += len(s) * len(s)
        return ans
