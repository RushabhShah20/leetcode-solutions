// Problem: Find All People With Secret
// Link to the problem: https://leetcode.com/problems/find-all-people-with-secret/
class Solution
{
public:
    vector<int> findAllPeople(int n, vector<vector<int>> &meetings, int firstPerson)
    {
        vector<vector<pair<int, int>>> graph(n);
        graph[0].push_back({firstPerson, 0});
        graph[firstPerson].push_back({0, 0});
        for (const vector<int> &meeting : meetings)
        {
            graph[meeting[0]].push_back({meeting[1], meeting[2]});
            graph[meeting[1]].push_back({meeting[0], meeting[2]});
        }
        vector<int> e(n, INT_MAX);
        e[0] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        pq.push({0, 0});
        while (!pq.empty())
        {
            pair<int, int> x = pq.top();
            pq.pop();
            if (x.first > e[x.second])
            {
                continue;
            }
            for (pair<int, int> &v : graph[x.second])
            {
                if (x.first <= v.second && v.second < e[v.first])
                {
                    e[v.first] = v.second;
                    pq.push({v.second, v.first});
                }
            }
        }
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (e[i] != INT_MAX)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};