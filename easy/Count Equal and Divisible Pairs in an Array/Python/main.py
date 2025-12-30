# Problem: Count Equal and Divisible Pairs in an Array
# Link to the problem: https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/
class Solution:
    def countPairs(self, nums: List[int], k: int) -> int:
        n: int = len(nums)
        ans: int = 0
        for i in range(0, n):
            for j in range(i + 1, n):
                if nums[i] == nums[j] and (i * j) % k == 0:
                    ans += 1
        return ans
