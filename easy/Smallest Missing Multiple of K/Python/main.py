# Problem: Smallest Missing Multiple of K
# Link to the problem: https://leetcode.com/problems/smallest-missing-multiple-of-k/
class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        n: int = len(nums)
        s: Set[int] = []
        for i in range(0, n):
            s.append(nums[i])
        ans: int = k
        while ans in s:
            ans += k
        return ans
