# Problem: Count Days Spent Together
# Link to the problem: https://leetcode.com/problems/count-days-spent-together/
class Solution:
    def dayOfTheYear(self, date: str, a: list[int]) -> int:
        x: int = int(date[:2])
        y: int = int(date[3:])
        ans: int = a[x - 1] + y
        return ans

    def countDaysTogether(
        self, arriveAlice: str, leaveAlice: str, arriveBob: str, leaveBob: str
    ) -> int:
        x: list[int] = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        y: list[int] = [0] * 13
        for i in range(1, 13):
            y[i] = y[i - 1] + x[i - 1]
        a: int = self.dayOfTheYear(arriveAlice, y)
        b: int = self.dayOfTheYear(leaveAlice, y)
        c: int = self.dayOfTheYear(arriveBob, y)
        d: int = self.dayOfTheYear(leaveBob, y)
        ans: int = max(0, min(b, d) - max(a, c) + 1)
        return ans
