# Problem: Minimum Subsequence in Non-Increasing Order
# Link to the problem: https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/
class Solution:
    def minSubsequence(self, nums: List[int]) -> List[int]:
        nums.sort(reverse=True)
        sum: int = 0
        for num in nums:
            sum += num
        a: int = 0
        ans: List[int] = []
        for num in nums:
            a += num
            if a > sum - a:
                ans.append(num)
                break
            else:
                ans.append(num)
        return ans
