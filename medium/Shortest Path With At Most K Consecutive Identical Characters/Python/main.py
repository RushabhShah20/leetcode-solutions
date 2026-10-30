# Problem: Shortest Path With At Most K Consecutive Identical Characters
# Link to the problem: https://leetcode.com/problems/shortest-path-with-at-most-k-consecutive-identical-characters/
class Solution:
    def shortestPath(self, n: int, edges: List[List[int]], labels: str, k: int) -> int:
        INT_MAX: int = 2**31 - 1
        adj: List[List[Tuple[int, int]]] = [[] for _ in range(n)]
        edge: List[int]
        for edge in edges:
            adj[edge[0]].append((edge[1], edge[2]))
        dist: List[List[int]] = [[INT_MAX] * (k + 1) for _ in range(n)]
        dist[0][1] = 0
        pq: List[List[int]] = []
        heapq.heappush(pq, [0, 0, 1])
        while pq:
            a: List[int] = heapq.heappop(pq)
            if a[0] > dist[a[1]][a[2]]:
                continue
            if a[1] == n - 1:
                return a[0]
            i: Tuple[int, int]
            for i in adj[a[1]]:
                b: int = a[2] + 1 if labels[i[0]] == labels[a[1]] else 1
                if b <= k:
                    if a[0] + i[1] < dist[i[0]][b]:
                        dist[i[0]][b] = a[0] + i[1]
                        heapq.heappush(pq, [dist[i[0]][b], i[0], b])
        return -1
