# Problem: Find Servers That Handled Most Number of Requests
# Link to the problem: https://leetcode.com/problems/find-servers-that-handled-most-number-of-requests/
class Solution:
    def busiestServers(self, k: int, arrival: list[int], load: list[int]) -> list[int]:
        n: int = len(arrival)
        a: list[int] = [0] * k
        b: list[int] = []
        c: list[tuple[int, int]] = []
        for i in range(k):
            heapq.heappush(b, i)
        for i in range(n):
            x: int = arrival[i]
            while c and c[0][0] <= x:
                y: tuple[int, int] = heapq.heappop(c)
                j = ((y[1] - i) % k + k) % k + i
                heapq.heappush(b, j)
            if b:
                j = b[0] % k
                heapq.heappop(b)
                heapq.heappush(c, (x + load[i], j))
                a[j] += 1
        ans: list[int] = []
        mx: int = 0
        for i in range(k):
            mx = max(mx, a[i])
        for i in range(k):
            if a[i] == mx:
                ans.append(i)
        return ans
