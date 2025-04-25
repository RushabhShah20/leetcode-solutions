# Problem: Find Occurrences of an Element in an Array
# Link to the problem: https://leetcode.com/problems/find-occurrences-of-an-element-in-an-array/
class Solution:
    def occurrencesOfElement(
        self, nums: List[int], queries: List[int], x: int
    ) -> List[int]:
        ans: List[int] = [-1] * len(queries)
        freq: List[int] = list()
        for i in range(0, len(nums), 1):
            if nums[i] == x:
                freq.append(i)
        for i in range(0, len(ans), 1):
            if queries[i] <= len(freq):
                ans[i] = freq[queries[i] - 1]
        return ans
