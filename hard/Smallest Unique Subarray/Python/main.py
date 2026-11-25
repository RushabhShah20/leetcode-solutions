# Problem: Smallest Unique Subarray
# Link to the problem: https://leetcode.com/problems/smallest-unique-subarray/
class Solution:
    def check(self, a: List[int], k: int) -> bool:
        n: int = len(a)
        m: Dict[int, int] = {}
        p1: int = 31
        p2: int = 37
        m1: int = 1000000007
        m2: int = 1000000009
        e1: int = 1
        e2: int = 1
        h1: int = 0
        h2: int = 0
        for i in range(0, k):
            h1 = (h1 * p1 % m1 + a[i]) % m1
            h2 = (h2 * p2 % m2 + a[i]) % m2
        for i in range(1, k):
            e1 = e1 * p1 % m1
            e2 = e2 * p2 % m2
        m[h1 * m2 + h2] = 1
        for i in range(k, n):
            x1: int = a[i - k] * e1 % m1
            h1 = (h1 - x1 + m1) % m1
            h1 = (h1 * p1 % m1 + a[i]) % m1
            x2: int = a[i - k] * e2 % m2
            h2 = (h2 - x2 + m2) % m2
            h2 = (h2 * p2 % m2 + a[i]) % m2
            m[h1 * m2 + h2] = m.get(h1 * m2 + h2, 0) + 1
        for count in m.values():
            if count == 1:
                return False
        return True

    def smallestUniqueSubarray(self, nums: List[int]) -> int:
        n: int = len(nums)
        ans: int = n
        l: int = 1
        r: int = n
        while l <= r:
            m: int = l + (r - l) // 2
            if self.check(nums, m):
                l = m + 1
            else:
                ans = m
                r = m - 1
        return ans
