// Problem: Number of Days Between Two Dates
// Link to the problem: https://leetcode.com/problems/number-of-days-between-two-dates/
class Solution {
    public int dayOfYear(String date) {
        int day = Integer.valueOf(date.substring(8, 10)), month = Integer.valueOf(date.substring(5, 7)),
                year = Integer.valueOf(date.substring(0, 4));
        int ans = 0;
        for (int i = 1971; i < year; i++) {
            if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)) {
                ans += 366;
            } else {
                ans += 365;
            }
        }
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            int[] months = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
            for (int i = 0; i < month - 1; i++) {
                ans += months[i];
            }
        } else {
            int[] months = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
            for (int i = 0; i < month - 1; i++) {
                ans += months[i];
            }
        }
        ans += day;
        return ans;
    }

    public int daysBetweenDates(String date1, String date2) {
        int x = dayOfYear(date1), y = dayOfYear(date2);
        return Math.abs(x - y);
    }
}