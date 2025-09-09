# Problem: Minimum Deletions to Make Array Divisible
# Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-array-divisible/
class Solution:
    def gcd(self, a: int, b: int) -> int:
        return a if b == 0 else self.gcd(b, a % b)

    def minOperations(self, nums: List[int], numsDivide: List[int]) -> int:
        x: int = numsDivide[0]
        for i in range(1, len(numsDivide)):
            x = self.gcd(x, numsDivide[i])
        ans: int = 0
        y = Counter(nums)
        for key in sorted(y.keys()):
            if x % key == 0:
                break
            else:
                ans += y[key]
        if ans == len(nums):
            return -1
        else:
            return ans
