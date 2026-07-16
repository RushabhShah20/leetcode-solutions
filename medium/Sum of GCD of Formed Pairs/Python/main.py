# Problem: Sum of GCD of Formed Pairs
# Link to the problem: https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/
class Solution:
    def gcd(self, a: int, b: int) -> int:
        return a if b == 0 else self.gcd(b, a % b)

    def gcdSum(self, nums: list[int]) -> int:
        n: int = len(nums)
        mx: int = 0
        a: List[int] = [0] * n
        for i in range(0, n):
            mx = max(mx, nums[i])
            a[i] = self.gcd(mx, nums[i])
        ans: int = 0
        a.sort()
        l: int = 0
        r: int = n - 1
        while l < r:
            ans += self.gcd(a[l], a[r])
            l += 1
            r -= 1
        return ans
