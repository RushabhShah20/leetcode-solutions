// Problem: Design Graph With Shortest Path Calculator
// Link to the problem: https://leetcode.com/problems/design-graph-with-shortest-path-calculator/
class Graph
{
public:
    vector<vector<pair<int, int>>> adj;
    int m;
    Graph(int n, vector<vector<int>> &edges)
    {
        m = n + 1;
        adj.resize(n + 1);
        for (const vector<int> &edge : edges)
        {
            adj[edge[0]].push_back({edge[1], edge[2]});
        }
    }

    void addEdge(vector<int> edge)
    {
        adj[edge[0]].push_back({edge[1], edge[2]});
    }

    int dijkstra(int u, int v)
    {
        vector<int> dist(m, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, u});
        dist[u] = 0;
        while (!pq.empty())
        {
            int time = pq.top().first, node = pq.top().second;
            pq.pop();
            for (const pair<int, int> i : adj[node])
            {
                if (dist[i.first] > i.second + time)
                {
                    dist[i.first] = time + i.second;
                    pq.push({dist[i.first], i.first});
                }
            }
        }
        const int ans = dist[v];
        if (ans == INT_MAX)
        {
            return -1;
        }
        return ans;
    }

    int shortestPath(int node1, int node2)
    {
        const int ans = dijkstra(node1, node2);
        return ans;
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */