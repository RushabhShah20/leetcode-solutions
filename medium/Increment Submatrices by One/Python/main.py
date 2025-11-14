# Problem: Increment Submatrices by One
# Link to the problem: https://leetcode.com/problems/increment-submatrices-by-one/
class Solution:
    def rangeAddQueries(self, n: int, queries: List[List[int]]) -> List[List[int]]:
        prefix: List[List[int]] = [[0 for _ in range(n + 1)] for _ in range(n + 1)]
        for query in queries:
            for i in range(query[0], query[2] + 1):
                prefix[i][query[1]] += 1
                prefix[i][query[3] + 1] -= 1
        for i in range(0, n):
            for j in range(1, n):
                prefix[i][j] += prefix[i][j - 1]
        ans: List[List[int]] = [[0 for _ in range(n)] for _ in range(n)]
        for i in range(0, n):
            for j in range(0, n):
                ans[i][j] = prefix[i][j]
        return ans
