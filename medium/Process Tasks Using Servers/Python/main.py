# Problem: Process Tasks Using Servers
# Link to the problem: https://leetcode.com/problems/process-tasks-using-servers/
class Solution:
    def assignTasks(self, servers: list[int], tasks: list[int]) -> list[int]:
        m: int = len(servers)
        n: int = len(tasks)
        a: list[tuple[int, int]] = []
        b: list[tuple[int, int]] = []
        y: tuple[int, int]
        z: tuple[int, int]
        for i in range(m):
            heapq.heappush(b, (servers[i], i))
        ans: list[int] = [0] * n
        x: int = 0
        for i in range(n):
            x = max(x, i)
            while a and a[0][0] <= x:
                y = heapq.heappop(a)
                heapq.heappush(b, (servers[y[1]], y[1]))
            if not b:
                x = a[0][0]
                while a and a[0][0] <= x:
                    y = heapq.heappop(a)
                    heapq.heappush(b, (servers[y[1]], y[1]))
            z = heapq.heappop(b)
            ans[i] = z[1]
            heapq.heappush(a, (x + tasks[i], z[1]))
        return ans