# Problem: Longest Subsequence With Non-Zero Bitwise XOR
# Link to the problem: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/
class Solution:
    def longestSubsequence(self, nums: List[int]) -> int:
        n: int = len(nums)
        z: int = 0
        for i in range(0, n):
            z ^= nums[i]
        if z != 0:
            return n
        x: bool = True
        for i in range(0, n):
            if nums[i] != 0:
                x = False
                break
        if x:
            return 0
        return n - 1
