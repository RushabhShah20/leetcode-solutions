# Problem: Minimum Operations to Make Array Sum Divisible by K
# Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/
class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        sum: int = 0
        for num in nums:
            sum += num
        ans: int = sum % k
        return ans
