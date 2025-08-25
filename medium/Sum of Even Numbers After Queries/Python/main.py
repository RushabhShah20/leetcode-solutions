# Problem: Sum of Even Numbers After Queries
# Link to the problem: https://leetcode.com/problems/sum-of-even-numbers-after-queries/
class Solution:
    def sumEvenAfterQueries(
        self, nums: List[int], queries: List[List[int]]
    ) -> List[int]:
        sum: int = 0
        for i in range(0, len(nums)):
            if nums[i] % 2 == 0:
                sum += nums[i]
        ans: List[int] = [0] * len(queries)
        for i in range(0, len(queries)):
            if nums[queries[i][1]] % 2 == 0:
                if (nums[queries[i][1]] + queries[i][0]) % 2 == 0:
                    sum += queries[i][0]
                    nums[queries[i][1]] += queries[i][0]
                else:
                    sum -= nums[queries[i][1]]
                    nums[queries[i][1]] += queries[i][0]
            else:
                if (nums[queries[i][1]] + queries[i][0]) % 2 == 0:
                    sum += nums[queries[i][1]] + queries[i][0]
                    nums[queries[i][1]] += queries[i][0]
                else:
                    nums[queries[i][1]] += queries[i][0]
            ans[i] = sum
        return ans
