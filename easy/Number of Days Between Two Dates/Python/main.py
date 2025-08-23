# Problem: Number of Days Between Two Dates
# Link to the problem: https://leetcode.com/problems/number-of-days-between-two-dates/
class Solution:
    def dayOfYear(self, date: str) -> int:
        ans: int = 0
        day: int = int(date[8:10])
        month: int = int(date[5:7])
        year: int = int(date[0:4])
        for i in range(1971, year):
            if i % 4 == 0 and (i % 100 != 0 or i % 400 == 0):
                ans += 366
            else:
                ans += 365
        if year % 4 == 0 and (year % 100 != 0 or year % 400 == 0):
            months: List[int] = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
            for i in range(0, month - 1):
                ans += months[i]
        else:
            months: List[int] = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
            for i in range(0, month - 1):
                ans += months[i]
        ans += day
        return ans

    def daysBetweenDates(self, date1: str, date2: str) -> int:
        x: int = self.dayOfYear(date1)
        y: int = self.dayOfYear(date2)
        return abs(x - y)
