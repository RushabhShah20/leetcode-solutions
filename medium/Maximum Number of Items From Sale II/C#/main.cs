// Problem: Maximum Number of Items From Sale II
// Link to the problem: https://leetcode.com/problems/maximum-number-of-items-from-sale-ii/
public class Solution
{
    public int MaximumSaleItems(int[][] items, int budget)
    {
        int n = items.Length;
        Array.Sort(items, (int[] p, int[] q) => p[1].CompareTo(q[1]));
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            mx = Math.Max(mx, items[i][0]);
        }
        int[] a = new int[mx + 1];
        for (int i = 0; i < n; i++)
        {
            a[items[i][0]]++;
        }
        for (int i = 1; i <= mx; i++)
        {
            if (a[i] > 0)
            {
                for (int j = i << 1; j <= mx; j += i)
                {
                    a[i] += a[j];
                }
            }
        }
        int mn = items[0][1];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x = items[i][0];
            int y = items[i][1];
            if (y - mn > mn)
            {
                break;
            }
            int b = a[x] - 1;
            int c = Math.Min(b, budget / y);
            ans += c << 1;
            budget -= c * y;
        }
        ans += budget / mn;
        return ans;
    }
}