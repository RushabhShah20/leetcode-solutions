# Problem: Partition Array According to Given Pivot
# Link to the problem: https://leetcode.com/problems/partition-array-according-to-given-pivot/
class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        ans, less, equal, greater = [], [], [], []
        for i in range(0, len(nums), 1):
            if nums[i] < pivot:
                less.append(nums[i])
            elif nums[i] > pivot:
                greater.append(nums[i])
            else:
                equal.append(nums[i])
        ans.extend(less)
        ans.extend(equal)
        ans.extend(greater)
        return ans
