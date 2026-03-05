# Problem: Minimum Changes To Make Alternating Binary String
# Link to the problem: https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/
class Solution:
    def minOperations(self, s: str) -> int:
        n: int = len(s)
        ansEven: int = 0
        ansOdd: int = 0
        for i in range(0, n):
            if i % 2 == 0:
                if s[i] == "0":
                    ansEven += 1
                else:
                    ansOdd += 1
            else:
                if s[i] == "1":
                    ansEven += 1
                else:
                    ansOdd += 1
        ans: int = min(ansEven, ansOdd)
        return ans
