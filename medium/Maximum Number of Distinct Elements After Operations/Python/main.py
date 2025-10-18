# Problem: Maximum Number of Distinct Elements After Operations
# Link to the problem: https://leetcode.com/problems/maximum-number-of-distinct-elements-after-operations/
class Solution:
    def maxDistinctElements(self, nums: List[int], k: int) -> int:
        ans: int = 0
        x: int = -sys.maxsize
        nums.sort()
        for num in nums:
            l: int = num - k
            r: int = num + k
            if x < l:
                x = l
                ans += 1
            elif x < r:
                x += 1
                ans += 1
        return ans
