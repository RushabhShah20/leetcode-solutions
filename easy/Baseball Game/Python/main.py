# Problem: Baseball Game
# Link to the problem: https://leetcode.com/problems/baseball-game/
class Solution:
    def calPoints(self, operations: List[str]) -> int:
        ans: int = 0
        a: List[int] = []
        for i in range(len(operations)):
            if operations[i] == "+":
                a.append(a[len(a) - 1] + a[len(a) - 2])
            elif operations[i] == "D":
                a.append(2 * a[len(a) - 1])
            elif operations[i] == "C":
                a.pop()
            else:
                a.append(int(operations[i]))
        for i in range(len(a)):
            ans += a[i]
        return ans
