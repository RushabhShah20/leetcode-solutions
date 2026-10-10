# Problem: Minimum Sum of Squared Difference
# Link to the problem: https://leetcode.com/problems/minimum-sum-of-squared-difference/
class Solution:
    def minSumSquareDiff(
        self, nums1: list[int], nums2: list[int], k1: int, k2: int
    ) -> int:
        n: int = len(nums1)
        ans: int = 0
        k: int = k1 + k2
        x: int = 0
        y: int = 0
        for i in range(0, n):
            nums1[i] = abs(nums1[i] - nums2[i])
            x = max(x, nums1[i])
        l: int = 0
        r: int = x
        while l <= r:
            m: int = (l + r) >> 1
            a: int = 0
            for i in range(0, n):
                a += nums1[i] - m if nums1[i] > m else 0
            z: bool = a <= k
            if z:
                y = m
                r = m - 1
            else:
                l = m + 1
        for i in range(0, n):
            if nums1[i] > y:
                k -= nums1[i] - y
        nums1.sort()
        for i in range(n - 1, -1, -1):
            b: int = min(y, nums1[i])
            if k > 0 and b > 0:
                k -= 1
                b -= 1
            ans += b * b
        return ans
