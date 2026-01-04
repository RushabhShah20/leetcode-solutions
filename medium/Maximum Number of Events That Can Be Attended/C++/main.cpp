// Problem: Maximum Number of Events That Can Be Attended
// Link to the problem: https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended/
class Solution
{
public:
    int maxEvents(vector<vector<int>> &events)
    {
        sort(events.begin(), events.end());
        const int n = events.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        int ans = 0, i = 0;
        for (int j = 1; i < n || !pq.empty(); j++)
        {
            while (i < n && events[i][0] == j)
            {
                pq.push(events[i][1]);
                i++;
            }
            while (!pq.empty() && pq.top() < j)
            {
                pq.pop();
            }
            if (!pq.empty())
            {
                pq.pop();
                ans++;
            }
        }
        return ans;
    }
};