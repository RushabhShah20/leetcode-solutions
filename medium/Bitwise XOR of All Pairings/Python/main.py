# Problem: Bitwise XOR of All Pairings
# Link to the problem: https://leetcode.com/problems/bitwise-xor-of-all-pairings/
class Solution:
    def xorAllNums(self, nums1: List[int], nums2: List[int]) -> int:
        m: int = len(nums1)
        n: int = len(nums2)
        if m % 2 == 0:
            if n % 2 == 0:
                return 0
            else:
                ans: int = 0
                for num in nums1:
                    ans ^= num
                return ans
        else:
            if n % 2 == 0:
                ans: int = 0
                for num in nums2:
                    ans ^= num
                return ans
            else:
                x: int = 0
                y: int = 0
                for num in nums1:
                    x ^= num
                for num in nums2:
                    y ^= num
                ans: int = x ^ y
                return ans
