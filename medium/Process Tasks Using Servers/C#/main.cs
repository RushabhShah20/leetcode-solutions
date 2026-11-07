// Problem: Process Tasks Using Servers
// Link to the problem: https://leetcode.com/problems/process-tasks-using-servers/
public class Solution
{
    public int[] AssignTasks(int[] servers, int[] tasks)
    {
        int m = servers.Length, n = tasks.Length;
        PriorityQueue<long[], long[]> a = new PriorityQueue<long[], long[]>(
            Comparer<long[]>.Create((long[] p, long[] q) =>
            {
                if (p[0] != q[0])
                {
                    return p[0].CompareTo(q[0]);
                }
                return p[1].CompareTo(q[1]);
            })
        );
        PriorityQueue<int[], int[]> b = new PriorityQueue<int[], int[]>(
            Comparer<int[]>.Create((int[] p, int[] q) =>
            {
                if (p[0] != q[0])
                {
                    return p[0].CompareTo(q[0]);
                }
                return p[1].CompareTo(q[1]);
            })
        );
        for (int i = 0; i < m; i++)
        {
            int[] entry = new int[] { servers[i], i };
            b.Enqueue(entry, entry);
        }
        int[] ans = new int[n];
        long x = 0L;
        for (int i = 0; i < n; i++)
        {
            x = Math.Max(x, (long)i);
            while (a.Count > 0 && a.Peek()[0] <= x)
            {
                long[] y = a.Dequeue();
                int[] entry = new int[] { servers[(int)y[1]], (int)y[1] };
                b.Enqueue(entry, entry);
            }
            if (b.Count == 0)
            {
                x = a.Peek()[0];
                while (a.Count > 0 && a.Peek()[0] <= x)
                {
                    long[] y = a.Dequeue();
                    int[] entry = new int[] { servers[(int)y[1]], (int)y[1] };
                    b.Enqueue(entry, entry);
                }
            }
            int[] z = b.Dequeue();
            ans[i] = z[1];
            long[] busyEntry = new long[] { x + tasks[i], z[1] };
            a.Enqueue(busyEntry, busyEntry);
        }
        return ans;
    }
}