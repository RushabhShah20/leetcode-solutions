// Problem: Find Servers That Handled Most Number of Requests
// Link to the problem: https://leetcode.com/problems/find-servers-that-handled-most-number-of-requests/
class Solution
{
public:
    vector<int> busiestServers(int k, vector<int> &arrival, vector<int> &load)
    {
        const int n = arrival.size();
        vector<int> a(k, 0);
        priority_queue<int, vector<int>, greater<>> b;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> c;
        for (int i = 0; i < k; ++i)
        {
            b.push(i);
        }
        for (int i = 0; i < n; ++i)
        {
            const int x = arrival[i];
            while (!c.empty() && c.top().first <= x)
            {
                const pair<int, int> y = c.top();
                c.pop();
                const int j = ((y.second - i) % k + k) % k + i;
                b.push(j);
            }
            if (!b.empty())
            {
                const int j = b.top() % k;
                b.pop();
                c.push(make_pair(x + load[i], j));
                a[j]++;
            }
        }
        vector<int> ans;
        int mx = 0;
        for (int i = 0; i < k; i++)
        {
            mx = max(mx, a[i]);
        }
        for (int i = 0; i < k; ++i)
        {
            if (a[i] == mx)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};