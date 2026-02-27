// Problem: Minimum Operations to Equalize Binary String
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-equalize-binary-string/
class Solution
{
public:
    int minOperations(string s, int k)
    {
        const int n = s.size();
        int m = 0;
        for (const char c : s)
        {
            if (c == '0')
            {
                m++;
            }
        }
        vector<int> dist(n + 1, -1);
        vector<set<int>> nodes(2);
        for (int i = 0; i <= n; i++)
        {
            nodes[i % 2].insert(i);
        }
        queue<int> q;
        q.push(m);
        dist[m] = 0;
        nodes[m % 2].erase(m);
        while (!q.empty())
        {
            const int x = q.front(), c1 = max(k - n + x, 0), c2 = min(x, k), l = x + k - 2 * c2, r = x + k - 2 * c1, p = l % 2;
            q.pop();
            set<int>::iterator it = nodes[p].lower_bound(l);
            while (it != nodes[p].end() && *it <= r)
            {
                const int y = *it;
                dist[y] = dist[x] + 1;
                q.push(y);
                it = nodes[p].erase(it);
            }
        }
        const int ans = dist[0];
        return ans;
    }
};