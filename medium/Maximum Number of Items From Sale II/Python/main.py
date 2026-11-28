# Problem: Maximum Number of Items From Sale II
# Link to the problem: https://leetcode.com/problems/maximum-number-of-items-from-sale-ii/
class Solution:
    def maximumSaleItems(self, items: List[List[int]], budget: int) -> int:
        n: int = len(items)
        items.sort(key=lambda p: p[1])
        mx: int = 0
        for i in range(n):
            mx = max(mx, items[i][0])
        a: List[int] = [0] * (mx + 1)
        for i in range(n):
            a[items[i][0]] += 1
        for i in range(1, mx + 1):
            if a[i] > 0:
                for j in range(i << 1, mx + 1, i):
                    a[i] += a[j]
        mn: int = items[0][1]
        ans: int = 0
        for i in range(n):
            x: int = items[i][0]
            y: int = items[i][1]
            if y - mn > mn:
                break
            b: int = a[x] - 1
            c: int = min(b, budget // y)
            ans += c << 1
            budget -= c * y
        ans += budget // mn
        return ans
