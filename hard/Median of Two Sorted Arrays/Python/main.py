# Problem: Median of Two Sorted Arrays
# Link to the problem: https://leetcode.com/problems/median-of-two-sorted-arrays/
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        ans: List[int] = list()
        for i in nums1:
            ans.append(i)
        for i in nums2:
            ans.append(i)
        ans.sort()
        return (
            float((ans[len(ans) // 2] + ans[(len(ans) // 2) - 1]) / 2)
            if len(ans) % 2 == 0
            else float(ans[len(ans) // 2])
        )
