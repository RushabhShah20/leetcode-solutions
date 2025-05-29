# Problem: The kth Factor of n
# Link to the problem: https://leetcode.com/problems/the-kth-factor-of-n/
class Solution:
    def kthFactor(self, n: int, k: int) -> int:
        a: List[int] = []
        for i in range(1, n + 1):
            if n % i == 0:
                a.append(i)
        if len(a) < k:
            return -1
        else:
            return a[k - 1]
