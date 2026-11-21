// Problem: Find Subtree Sizes After Changes
// Link to the problem: https://leetcode.com/problems/find-subtree-sizes-after-changes/
class Solution {
    int[] ans;

    void dfs(final int u, List<List<Integer>> adj, String s, int[] parent, int[] b) {
        final int c = s.charAt(u) - 'a';
        final int w = b[c];
        if (u > 0 && w != -1) {
            parent[u] = w;
        }
        b[c] = u;
        for (final int v : adj.get(u)) {
            dfs(v, adj, s, parent, b);
        }
        b[c] = w;
    }

    int calc(final int u, List<List<Integer>> tree) {
        ans[u] = 1;
        for (final int v : tree.get(u)) {
            ans[u] += calc(v, tree);
        }
        return ans[u];
    }

    public int[] findSubtreeSizes(int[] parent, String s) {
        final int n = parent.length;
        List<List<Integer>> adj = new ArrayList<List<Integer>>(n);
        List<List<Integer>> tree = new ArrayList<List<Integer>>(n);
        for (int i = 0; i < n; i++) {
            adj.add(new ArrayList<Integer>());
            tree.add(new ArrayList<Integer>());
        }
        for (int i = 1; i < n; i++) {
            adj.get(parent[i]).add(i);
        }
        int[] b = new int[26];
        Arrays.fill(b, -1);
        dfs(0, adj, s, parent, b);
        for (int i = 1; i < n; i++) {
            tree.get(parent[i]).add(i);
        }
        ans = new int[n];
        calc(0, tree);
        return ans;
    }
}