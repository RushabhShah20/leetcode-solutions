// Problem: Find Subtree Sizes After Changes
// Link to the problem: https://leetcode.com/problems/find-subtree-sizes-after-changes/

public class Solution
{
    private int[] ans;

    private void Dfs(int u, List<List<int>> adj, string s, int[] parent, int[] b)
    {
        int c = s[u] - 'a';
        int w = b[c];
        if (u > 0 && w != -1)
        {
            parent[u] = w;
        }
        b[c] = u;
        foreach (int v in adj[u])
        {
            Dfs(v, adj, s, parent, b);
        }
        b[c] = w;
    }

    private int Calc(int u, List<List<int>> tree)
    {
        ans[u] = 1;
        foreach (int v in tree[u])
        {
            ans[u] += Calc(v, tree);
        }
        return ans[u];
    }

    public int[] FindSubtreeSizes(int[] parent, string s)
    {
        int n = parent.Length;
        List<List<int>> adj = new List<List<int>>(n);
        List<List<int>> tree = new List<List<int>>(n);
        for (int i = 0; i < n; i++)
        {
            adj.Add(new List<int>());
            tree.Add(new List<int>());
        }
        for (int i = 1; i < n; i++)
        {
            adj[parent[i]].Add(i);
        }
        int[] b = new int[26];
        Array.Fill(b, -1);
        Dfs(0, adj, s, parent, b);
        for (int i = 1; i < n; i++)
        {
            tree[parent[i]].Add(i);
        }
        ans = new int[n];
        Calc(0, tree);
        return ans;
    }
}