# Problem: Count Zero Request Servers
# Link to the problem: https://leetcode.com/problems/count-zero-request-servers/
class Solution:
    def countServers(self, n: int, logs: List[List[int]], x: int, queries: List[int]) -> List[int]:
        m: int = len(queries)
        k: int = len(logs)
        logs.sort(key=lambda p: p[1])
        a: List[List[int]] = [[0, 0] for _ in range(m)]
        i: int
        for i in range(m):
            a[i][0] = queries[i]
            a[i][1] = i
        a.sort(key=lambda p: (p[0], p[1]))
        ans: List[int] = [0] * m
        b: List[int] = [0] * (n + 1)
        l: int = 0
        r: int = 0
        y: int = 0
        for i in range(m):
            while r < k and logs[r][1] <= a[i][0]:
                c: int = logs[r][0]
                r += 1
                b[c] += 1
                if b[c] == 1:
                    y += 1
            while l < r and logs[l][1] < a[i][0] - x:
                c = logs[l][0]
                l += 1
                b[c] -= 1
                if b[c] == 0:
                    y -= 1
            ans[a[i][1]] = n - y
        return ans