// Problem: Find Subtree Sizes After Changes
// Link to the problem: https://leetcode.com/problems/find-subtree-sizes-after-changes/
class Solution
{
public:
    vector<int> ans;
    void dfs(const int u, vector<vector<int>> &adj, string &s, vector<int> &parent, vector<int> &b)
    {
        const int c = s[u] - 'a', w = b[c];
        if (u > 0 && w != -1)
        {
            parent[u] = w;
        }
        b[c] = u;
        for (const int v : adj[u])
        {
            dfs(v, adj, s, parent, b);
        }
        b[c] = w;
    }
    int calc(const int u, vector<vector<int>> &tree)
    {
        ans[u] = 1;
        for (const int v : tree[u])
        {
            ans[u] += calc(v, tree);
        }
        return ans[u];
    }
    vector<int> findSubtreeSizes(vector<int> &parent, string s)
    {
        const int n = parent.size();
        vector<vector<int>> adj(n), tree(n);
        for (int i = 1; i < n; i++)
        {
            adj[parent[i]].push_back(i);
        }
        vector<int> b(26, -1);
        dfs(0, adj, s, parent, b);
        for (int i = 1; i < n; i++)
        {
            tree[parent[i]].push_back(i);
        }
        ans.resize(n);
        calc(0, tree);
        return ans;
    }
};
