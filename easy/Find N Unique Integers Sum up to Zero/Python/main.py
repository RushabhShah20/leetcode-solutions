# Problem: Find N Unique Integers Sum up to Zero
# Link to the problem: https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/
class Solution:
    def sumZero(self, n: int) -> List[int]:
        ans: List[int] = [0] * n
        for i in range(0, n):
            ans[i] = 2 * i - n + 1
        return ans
