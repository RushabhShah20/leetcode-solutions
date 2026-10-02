# Problem: Generate Parentheses
# Link to the problem: https://leetcode.com/problems/generate-parentheses/
class Solution:
    def generateParenthesis(self, n: int) -> list[str]:
        if n == 0:
            return [""]
        ans: list[str] = []
        for i in range(0, n):
            l: list[str] = self.generateParenthesis(i)
            r: list[str] = self.generateParenthesis(n - 1 - i)
            for j in range(0, len(l)):
                for k in range(0, len(r)):
                    ans.append("(" + l[j] + ")" + r[k])
        return ans
