# Problem: Find Xor-Beauty of Array
# Link to the problem: https://leetcode.com/problems/find-xor-beauty-of-array/
class Solution:
    def xorBeauty(self, nums: List[int]) -> int:
        ans: int = 0
        for num in nums:
            ans ^= num
        return ans
