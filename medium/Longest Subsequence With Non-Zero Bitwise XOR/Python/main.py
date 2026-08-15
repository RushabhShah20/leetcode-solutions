# Problem: Longest Subsequence With Non-Zero Bitwise XOR
# Link to the problem: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/
class Solution:
    def longestSubsequence(self, nums: List[int]) -> int:
        n: int = len(nums)
        x: int = 0
        y: bool = True
        for i in range(0, n):
            x ^= nums[i]
            if nums[i] > 0:
                y = False
        if x > 0:
            return n
        ans: int = 0 if y else n - 1
        return ans
