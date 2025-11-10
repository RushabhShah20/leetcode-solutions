// Problem: Daily Temperatures
// Link to the problem: https://leetcode.com/problems/daily-temperatures/
public class Solution
{
    public int[] DailyTemperatures(int[] temperatures)
    {
        int n = temperatures.Length;
        int[] ans = new int[n];
        Stack<int> s = new Stack<int>();
        for (int i = 0; i < n; i++)
        {
            while (s.Count != 0 && temperatures[s.Peek()] < temperatures[i])
            {
                int j = s.Peek();
                s.Pop();
                ans[j] = i - j;
            }
            s.Push(i);
        }
        return ans;
    }
}