// Problem: Maximum Number of Eaten Apples
// Link to the problem: https://leetcode.com/problems/maximum-number-of-eaten-apples/
class Solution
{
public:
    int eatenApples(vector<int> &apples, vector<int> &days)
    {
        const int n = apples.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        int ans = 0;
        for (int i = 0; i < n || !pq.empty(); i++)
        {
            if (i < n && apples[i] > 0)
            {
                pq.push(make_pair(i + days[i] - 1, apples[i]));
            }
            while (!pq.empty() && pq.top().first < i)
            {
                pq.pop();
            }
            if (!pq.empty())
            {
                pair<int, int> x = pq.top();
                pq.pop();
                if (x.second > 1)
                {
                    pq.push(make_pair(x.first, x.second - 1));
                }
                ans++;
            }
        }
        return ans;
    }
};