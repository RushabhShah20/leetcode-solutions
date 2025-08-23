// Problem: Number of Days Between Two Dates
// Link to the problem: https://leetcode.com/problems/number-of-days-between-two-dates/
public class Solution
{
    public int dayOfYear(string date)
    {
        int day = int.Parse(date.Substring(8, 2));
        int month = int.Parse(date.Substring(5, 2));
        int year = int.Parse(date.Substring(0, 4));
        int ans = 0;
        for (int i = 1971; i < year; i++)
        {
            if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
            {
                ans += 366;
            }
            else
            {
                ans += 365;
            }
        }
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        {
            int[] months = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
            for (int i = 0; i < month - 1; i++)
            {
                ans += months[i];
            }
        }
        else
        {
            int[] months = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
            for (int i = 0; i < month - 1; i++)
            {
                ans += months[i];
            }
        }
        ans += day;
        return ans;
    }
    public int DaysBetweenDates(string date1, string date2)
    {
        int x = dayOfYear(date1), y = dayOfYear(date2);
        return Math.Abs(x - y);
    }
}