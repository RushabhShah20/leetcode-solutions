# Problem: Find Minimum Operations to Make All Elements Divisible by Three
# Link to the problem: https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/
class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        ans: int = 0
        for num in nums:
            ans += 1 if num % 3 else 0
        return ans
