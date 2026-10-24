// Problem: Count Days Spent Together
// Link to the problem: https://leetcode.com/problems/count-days-spent-together/
public class Solution
{
    public int dayOfTheYear(string date, int[] a)
    {
        int x = int.Parse(date.Substring(0, 2)), y = int.Parse(date.Substring(3, 2));
        int ans = a[x - 1] + y;
        return ans;
    }
    public int CountDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob)
    {
        int[] x = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        int[] y = new int[13];
        for (int i = 1; i < 13; i++)
        {
            y[i] = y[i - 1] + x[i - 1];
        }
        int a = dayOfTheYear(arriveAlice, y), b = dayOfTheYear(leaveAlice, y), c = dayOfTheYear(arriveBob, y), d = dayOfTheYear(leaveBob, y);
        int ans = Math.Max(0, Math.Min(b, d) - Math.Max(a, c) + 1);
        return ans;
    }
}