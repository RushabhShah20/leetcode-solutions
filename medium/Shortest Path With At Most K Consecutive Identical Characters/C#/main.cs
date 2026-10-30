// Problem: Shortest Path With At Most K Consecutive Identical Characters
// Link to the problem: https://leetcode.com/problems/shortest-path-with-at-most-k-consecutive-identical-characters/
public class Solution
{
    public int ShortestPath(int n, int[][] edges, string labels, int k)
    {
        List<List<int[]>> adj = new List<List<int[]>>();
        for (int i = 0; i < n; i++)
        {
            adj.Add(new List<int[]>());
        }
        foreach (int[] edge in edges)
        {
            adj[edge[0]].Add(new int[] { edge[1], edge[2] });
        }
        int[][] dist = new int[n][];
        for (int i = 0; i < n; i++)
        {
            dist[i] = new int[k + 1];
            Array.Fill(dist[i], int.MaxValue);
        }
        dist[0][1] = 0;
        PriorityQueue<int[], (int, int, int)> pq = new PriorityQueue<int[], (int, int, int)>();
        pq.Enqueue(new int[] { 0, 0, 1 }, (0, 0, 1));
        while (pq.Count > 0)
        {
            int[] a = pq.Dequeue();
            if (a[0] > dist[a[1]][a[2]])
            {
                continue;
            }
            if (a[1] == n - 1)
            {
                return a[0];
            }
            foreach (int[] i in adj[a[1]])
            {
                int b = labels[i[0]] == labels[a[1]] ? a[2] + 1 : 1;
                if (b <= k)
                {
                    if (a[0] + i[1] < dist[i[0]][b])
                    {
                        dist[i[0]][b] = a[0] + i[1];
                        pq.Enqueue(new int[] { dist[i[0]][b], i[0], b }, (dist[i[0]][b], i[0], b));
                    }
                }
            }
        }
        return -1;
    }
}