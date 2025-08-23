# Problem: Day of the Week
# Link to the problem: https://leetcode.com/problems/day-of-the-week/
class Solution:
    def dayOfTheWeek(self, day: int, month: int, year: int) -> str:
        ans: int = 0
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
        ans %= 7
        if ans == 1:
            return "Friday"
        elif ans == 2:
            return "Saturday"
        elif ans == 3:
            return "Sunday"
        elif ans == 4:
            return "Monday"
        elif ans == 5:
            return "Tuesday"
        elif ans == 6:
            return "Wednesday"
        else:
            return "Thursday"
