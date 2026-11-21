# Problem: Find Subtree Sizes After Changes
# Link to the problem: https://leetcode.com/problems/find-subtree-sizes-after-changes/
class Solution:
    def dfs(
        self, u: int, adj: List[List[int]], s: str, parent: List[int], b: List[int]
    ) -> None:
        c: int = ord(s[u]) - ord("a")
        w: int = b[c]
        if u > 0 and w != -1:
            parent[u] = w
        b[c] = u
        v: int
        for v in adj[u]:
            self.dfs(v, adj, s, parent, b)
        b[c] = w

    def calc(self, u: int, tree: List[List[int]]) -> int:
        self.ans[u] = 1
        v: int
        for v in tree[u]:
            self.ans[u] += self.calc(v, tree)
        return self.ans[u]

    def findSubtreeSizes(self, parent: List[int], s: str) -> List[int]:
        n: int = len(parent)
        adj: List[List[int]] = [[] for _ in range(n)]
        tree: List[List[int]] = [[] for _ in range(n)]
        i: int
        for i in range(1, n):
            adj[parent[i]].append(i)
        b: List[int] = [-1] * 26
        self.dfs(0, adj, s, parent, b)
        for i in range(1, n):
            tree[parent[i]].append(i)
        self.ans: List[int] = [0] * n
        self.calc(0, tree)
        return self.ans
