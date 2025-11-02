# Problem: Find Missing Elements
# Link to the problem: https://leetcode.com/problems/find-missing-elements/
class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        s: SortedSet[int] = SortedSet([])
        for num in nums:
            s.add(num)
        ans: List[int] = []
        for i in range(s[0], s[len(nums) - 1]):
            if i not in s:
                ans.append(i)
        return ans
