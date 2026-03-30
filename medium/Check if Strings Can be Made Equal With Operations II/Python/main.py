# Problem: Check if Strings Can be Made Equal With Operations II
# Link to the problem: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-ii/
class Solution:
    def checkStrings(self, s1: str, s2: str) -> bool:
        n: int = len(s1)
        x: List[int] = [0] * 52
        y: List[int] = [0] * 52
        for i in range(0, n):
            if i % 2 == 0:
                x[ord(s1[i]) - ord("a")] += 1
                y[ord(s2[i]) - ord("a")] += 1
            else:
                x[ord(s1[i]) - ord("a") + 26] += 1
                y[ord(s2[i]) - ord("a") + 26] += 1
        for i in range(0, 52):
            if x[i] != y[i]:
                return False
        return True
