# Problem: Count Pairs Whose Sum is Less than Target
# Link to the problem: https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/
class Solution:
    def countPairs(self, nums: List[int], target: int) -> int:
        ans: int = 0
        for i in range(0, len(nums), 1):
            for j in range(i + 1, len(nums), 1):
                if nums[i] + nums[j] < target:
                    ans += 1
        return ans
