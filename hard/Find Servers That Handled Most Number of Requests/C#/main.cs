// Problem: Find Servers That Handled Most Number of Requests
// Link to the problem: https://leetcode.com/problems/find-servers-that-handled-most-number-of-requests/
public class Solution
{
    public IList<int> BusiestServers(int k, int[] arrival, int[] load)
    {
        int n = arrival.Length;
        int[] a = new int[k];
        PriorityQueue<int, int> b = new PriorityQueue<int, int>();
        PriorityQueue<(int, int), (int, int)> c = new PriorityQueue<(int, int), (int, int)>();
        for (int i = 0; i < k; ++i)
        {
            b.Enqueue(i, i);
        }
        for (int i = 0; i < n; ++i)
        {
            int x = arrival[i];
            while (c.Count > 0 && c.Peek().Item1 <= x)
            {
                (int, int) y = c.Dequeue();
                int j = ((y.Item2 - i) % k + k) % k + i;
                b.Enqueue(j, j);
            }
            if (b.Count > 0)
            {
                int j = b.Peek() % k;
                b.Dequeue();
                (int, int) entry = (x + load[i], j);
                c.Enqueue(entry, entry);
                a[j]++;
            }
        }
        IList<int> ans = new List<int>();
        int mx = 0;
        for (int i = 0; i < k; i++)
        {
            mx = Math.Max(mx, a[i]);
        }
        for (int i = 0; i < k; ++i)
        {
            if (a[i] == mx)
            {
                ans.Add(i);
            }
        }
        return ans;
    }
}