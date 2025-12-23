// Problem: Two Best Non-Overlapping Events
// Link to the problem: https://leetcode.com/problems/two-best-non-overlapping-events/
class Solution
{
public:
    int maxTwoEvents(vector<vector<int>> &events)
    {
        sort(events.begin(), events.end());
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        int ans = 0, x = 0;
        for (const vector<int> &event : events)
        {
            while (!pq.empty() && pq.top().first < event[0])
            {
                x = max(x, pq.top().second);
                pq.pop();
            }
            ans = max(ans, x + event[2]);
            pq.push({event[1], event[2]});
        }
        return ans;
    }
};