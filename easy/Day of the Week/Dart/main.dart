// Problem: Day of the Week
// Link to the problem: https://leetcode.com/problems/day-of-the-week/
class Solution {
  String dayOfTheWeek(int day, int month, int year) {
    int ans = 0;
    for (int i = 1971; i < year; i++) {
      if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)) {
        ans += 366;
      } else {
        ans += 365;
      }
    }
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
      List<int> months = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
      for (int i = 0; i < month - 1; i++) {
        ans += months[i];
      }
    } else {
      List<int> months = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
      for (int i = 0; i < month - 1; i++) {
        ans += months[i];
      }
    }
    ans += day;
    ans %= 7;
    if (ans == 1) {
      return "Friday";
    } else if (ans == 2) {
      return "Saturday";
    } else if (ans == 3) {
      return "Sunday";
    } else if (ans == 4) {
      return "Monday";
    } else if (ans == 5) {
      return "Tuesday";
    } else if (ans == 6) {
      return "Wednesday";
    } else {
      return "Thursday";
    }
  }
}
