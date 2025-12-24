// Problem: Apple Redistribution into Boxes
// Link to the problem: https://leetcode.com/problems/apple-redistribution-into-boxes/
public class Solution
{
    public int MinimumBoxes(int[] apple, int[] capacity)
    {
        int ans = 0;
        Array.Sort(capacity, (a, b) => b.CompareTo(a));
        int total = 0;
        foreach (int a in apple)
        {
            total += a;
        }
        foreach (int c in capacity)
        {
            if (total >= c)
            {
                total -= c;
                ans++;
            }
            else
            {
                if (total != 0)
                {
                    ans++;
                }
                break;
            }
        }
        return ans;
    }
}