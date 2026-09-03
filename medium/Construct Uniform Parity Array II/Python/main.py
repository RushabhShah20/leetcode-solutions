# Problem: Construct Uniform Parity Array II
# Link to the problem: https://leetcode.com/problems/construct-uniform-parity-array-ii/
class Solution:
    def uniformArray(self, nums1: list[int]) -> bool:
        n: int = len(nums1)
        x: bool = True
        mn: int = 1000000001
        for i in range(0, n):
            num: int = nums1[i]
            if num & 1:
                x = False
            mn = min(mn, num)
        ans: bool = bool((mn & 1) or x)
        return ans
