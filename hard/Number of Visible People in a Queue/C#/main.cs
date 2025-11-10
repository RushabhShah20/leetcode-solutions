// Problem: Number of Visible People in a Queue
// Link to the problem: https://leetcode.com/problems/number-of-visible-people-in-a-queue/
public class Solution
{
    public int[] CanSeePersonsCount(int[] heights)
    {
        int n = heights.Length;
        int[] ans = new int[n];
        Array.Fill(ans, -1);
        Stack<int> s = new Stack<int>();
        for (int i = n - 1; i >= 0; i--)
        {
            int count = 0;
            while (s.Count != 0 && heights[s.Peek()] < heights[i])
            {
                s.Pop();
                count++;
            }
            if (s.Count != 0)
            {
                count++;
            }
            ans[i] = count;
            s.Push(i);
        }
        return ans;
    }
}