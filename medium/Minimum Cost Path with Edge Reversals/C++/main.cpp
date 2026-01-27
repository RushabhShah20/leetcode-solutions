// Problem: Minimum Cost Path with Edge Reversals
// Link to the problem: https://leetcode.com/problems/minimum-cost-path-with-edge-reversals/
class Solution
{
public:
    int minCost(int n, vector<vector<int>> &edges)
    {
        vector<vector<pair<int, int>>> graph(n);
        for (const vector<int> &edge : edges)
        {
            graph[edge[0]].push_back({edge[1], edge[2]});
            graph[edge[1]].push_back({edge[0], 2 * edge[2]});
        }
        vector<long long> dist(n, LLONG_MAX);
        dist[0] = 0;
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
        pq.push({0, 0});
        while (!pq.empty())
        {
            pair<long long, int> x = pq.top();
            pq.pop();
            if (x.second == n - 1)
            {
                return x.first;
            }
            if (x.first > dist[x.second])
            {
                continue;
            }
            for (const pair<int, int> &y : graph[x.second])
            {
                if (dist[x.second] + y.second < dist[y.first])
                {
                    dist[y.first] = dist[x.second] + y.second;
                    pq.push({dist[y.first], y.first});
                }
            }
        }
        return -1;
    }
};