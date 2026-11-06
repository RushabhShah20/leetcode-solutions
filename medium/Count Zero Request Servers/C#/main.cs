// Problem: Count Zero Request Servers
// Link to the problem: https://leetcode.com/problems/count-zero-request-servers/
public class Solution
{
    public int[] CountServers(int n, int[][] logs, int x, int[] queries)
    {
        int m = queries.Length, k = logs.Length;
        Array.Sort(logs, (int[] p, int[] q) => p[1].CompareTo(q[1]));
        int[][] a = new int[m][];
        for (int i = 0; i < m; i++)
        {
            a[i] = new int[2];
            a[i][0] = queries[i];
            a[i][1] = i;
        }
        Array.Sort(a, (int[] p, int[] q) =>
        {
            if (p[0] != q[0])
            {
                return p[0].CompareTo(q[0]);
            }
            return p[1].CompareTo(q[1]);
        });
        int[] ans = new int[m], b = new int[n + 1];
        int l = 0, r = 0, y = 0;
        for (int i = 0; i < m; i++)
        {
            while (r < k && logs[r][1] <= a[i][0])
            {
                int c = logs[r][0];
                r++;
                b[c]++;
                if (b[c] == 1)
                {
                    y++;
                }
            }
            while (l < r && logs[l][1] < a[i][0] - x)
            {
                int c = logs[l][0];
                l++;
                b[c]--;
                if (b[c] == 0)
                {
                    y--;
                }
            }
            ans[a[i][1]] = n - y;
        }
        return ans;
    }
}