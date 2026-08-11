# Problem: Smallest Missing Integer Greater Than Sequential Prefix Sum
# Link to the problem: https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/
class Solution:
    def missingInteger(self, nums: List[int]) -> int:
        n: int = len(nums)
        s: set[int] = set(nums)
        m: int = 1
        for i in range(1, n):
            if nums[i] == nums[i - 1] + 1:
                m += 1
            else:
                break
        ans: int = (nums[m - 1] + nums[0]) * m // 2
        while ans in s:
            ans += 1
        return ans
