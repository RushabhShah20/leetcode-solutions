// Problem: Count the Number of Complete Components
// Link to the problem: https://leetcode.com/problems/count-the-number-of-complete-components/
class Solution
{
public:
    void dfs(const int u, int &m, int &k, vector<bool> &visited, const vector<vector<int>> &graph)
    {
        visited[u] = true;
        m++;
        k += graph[u].size();
        for (const int v : graph[u])
        {
            if (!visited[v])
            {
                dfs(v, m, k, visited, graph);
            }
        }
    }
    int countCompleteComponents(int n, vector<vector<int>> &edges)
    {
        vector<vector<int>> graph(n);
        for (const vector<int> &edge : edges)
        {
            const int u = edge[0], v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<bool> visited(n, false);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                int m = 0, k = 0;
                dfs(i, m, k, visited, graph);
                if (k == m * (m - 1))
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};