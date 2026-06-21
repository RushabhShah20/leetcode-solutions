// Problem: Maximum Ice Cream Bars
// Link to the problem: https://leetcode.com/problems/maximum-ice-cream-bars/
public class Solution
{
    public int MaxIceCream(int[] costs, int coins)
    {
        int n = costs.Length;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            mx = Math.Max(mx, costs[i]);
        }
        int[] a = new int[mx + 1];
        for (int i = 0; i < n; i++)
        {
            a[costs[i]]++;
        }
        int ans = 0;
        for (int i = 1; i <= mx; i++)
        {
            if (a[i] == 0)
            {
                continue;
            }
            if (coins < i)
            {
                break;
            }
            int x = Math.Min(a[i], coins / i);
            coins -= i * x;
            ans += x;
        }
        return ans;
    }
}