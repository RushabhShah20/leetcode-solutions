# Problem: Two Sum II - Input Array Is Sorted
# Link to the problem: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        l: int = 0
        r: int = len(numbers) - 1
        nums: List[int] = numbers
        while l < r:
            if nums[l] + nums[r] == target:
                return [l + 1, r + 1]
            elif nums[l] + nums[r] < target:
                left: int = l
                right: int = r - 1
                while left < right:
                    mid: int = (left + right) // 2
                    if nums[mid] + nums[r] >= target:
                        right = mid
                    else:
                        left = mid + 1
                l = left
            else:
                left: int = l + 1
                right: int = r
                while left < right:
                    mid = (left + right + 1) // 2
                    if nums[mid] + nums[l] <= target:
                        left = mid
                    else:
                        right = mid - 1
                r = right
        return [0, 0]
