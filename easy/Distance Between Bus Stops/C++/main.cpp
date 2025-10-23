// Problem: Distance Between Bus Stops
// Link to the problem: https://leetcode.com/problems/distance-between-bus-stops/
class Solution
{
public:
    int distanceBetweenBusStops(vector<int> &distance, int start, int destination)
    {
        int n = distance.size();
        vector<int> prefix(n + 1, 0);
        prefix[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            prefix[i] = prefix[i - 1] + distance[i - 1];
        }
        int ans = min(abs(prefix[destination] - prefix[start]), prefix[n] - abs(prefix[destination] - prefix[start]));
        return ans;
    }
};