# Problem: XOR After Range Multiplication Queries I
# Link to the problem: https://leetcode.com/problems/xor-after-range-multiplication-queries-i/
class Solution:
    def xorAfterQueries(self, nums: List[int], queries: List[List[int]]) -> int:
        mod: int = 1000000007
        for query in queries:
            for i in range(query[0], query[1] + 1, query[2]):
                nums[i] = (nums[i] * query[3]) % mod
        ans: int = 0
        for num in nums:
            ans ^= num
        return ans
