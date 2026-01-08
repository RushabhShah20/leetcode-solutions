# Problem: Minimum Common Value
# Link to the problem: https://leetcode.com/problems/minimum-common-value/
class Solution:
    def getCommon(self, nums1: List[int], nums2: List[int]) -> int:
        m: int = len(nums1)
        n: int = len(nums2)
        i: int = 0
        j: int = 0
        while i < m and j < n:
            if nums1[i] > nums2[j]:
                j += 1
            elif nums1[i] < nums2[j]:
                i += 1
            else:
                return nums1[i]
        return -1
