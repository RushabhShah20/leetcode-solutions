# Problem: Minimum Number of Operations to Make All Array Elements Equal to 1
# Link to the problem: https://leetcode.com/problems/minimum-number-of-operations-to-make-all-array-elements-equal-to-1/
class Solution:
    def gcd(self, a: int, b: int) -> int:
        return a if b == 0 else self.gcd(b, a % b)

    def minOperations(self, nums: List[int]) -> int:
        ans: int = 0
        g: int = nums[0]
        for num in nums:
            g = self.gcd(g, num)
            if g == 1:
                break
        if g != 1:
            return -1
        n: int = len(nums)
        count: int = 0
        for num in nums:
            if num == 1:
                count += 1
        if count > 0:
            return n - count
        ans = sys.maxsize
        for i in range(0, n):
            x: int = 0
            for j in range(i, n):
                x = self.gcd(x, nums[j])
                if x == 1:
                    ans = min(ans, j - i + 1)
                    break
        ans = (ans - 1) + (n - 1)
        return ans
