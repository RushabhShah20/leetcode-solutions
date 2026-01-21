// Problem: Network Delay Time
// Link to the problem: https://leetcode.com/problems/network-delay-time/
class Solution
{
public:
    int networkDelayTime(vector<vector<int>> &times, int n, int k)
    {
        vector<vector<pair<int, int>>> adj(n + 1);
        for (const vector<int> &time : times)
        {
            adj[time[0]].push_back({time[1], time[2]});
        }
        vector<int> dist(n + 1, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, k});
        dist[k] = 0;
        while (!pq.empty())
        {
            int time = pq.top().first, u = pq.top().second;
            pq.pop();
            for (const pair<int, int> v : adj[u])
            {
                if (dist[v.first] > v.second + time)
                {
                    dist[v.first] = time + v.second;
                    pq.push({dist[v.first], v.first});
                }
            }
        }
        const int ans = *max_element(dist.begin() + 1, dist.end());
        if (ans == INT_MAX)
        {
            return -1;
        }
        return ans;
    }
};