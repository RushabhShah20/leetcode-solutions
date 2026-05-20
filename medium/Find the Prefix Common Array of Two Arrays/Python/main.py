# Problem: Find the Prefix Common Array of Two Arrays
# Link to the problem: https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/
class Solution:
    def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
        n: int = len(A)
        m: List[int] = [0] * (n + 1)
        ans: List[int] = [0] * n
        for i in range(0, n + 1):
            m[i] = 0
        x: int = 0
        for i in range(0, n):
            m[A[i]] += 1
            if m[A[i]] == 2:
                x += 1
            m[B[i]] += 1
            if m[B[i]] == 2:
                x += 1
            ans[i] = x
        return ans
