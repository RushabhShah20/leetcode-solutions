// Problem: Shortest Path With At Most K Consecutive Identical Characters
// Link to the problem: https://leetcode.com/problems/shortest-path-with-at-most-k-consecutive-identical-characters/
class Solution
{
public:
    int shortestPath(int n, vector<vector<int>> &edges, string labels, int k)
    {
        vector<vector<pair<int, int>>> adj(n);
        for (const vector<int> &edge : edges)
        {
            adj[edge[0]].push_back({edge[1], edge[2]});
        }
        vector<vector<int>> dist(n, vector<int>(k + 1, INT_MAX));
        dist[0][1] = 0;
        priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;
        pq.push({0, 0, 1});
        while (!pq.empty())
        {
            const vector<int> a = pq.top();
            pq.pop();
            if (a[0] > dist[a[1]][a[2]])
            {
                continue;
            }
            if (a[1] == n - 1)
            {
                return a[0];
            }
            for (const pair<int, int> i : adj[a[1]])
            {
                const int b = labels[i.first] == labels[a[1]] ? a[2] + 1 : 1;
                if (b <= k)
                {
                    if (a[0] + i.second < dist[i.first][b])
                    {
                        dist[i.first][b] = a[0] + i.second;
                        pq.push({dist[i.first][b], i.first, b});
                    }
                }
            }
        }
        return -1;
    }
};