// Problem: Count Zero Request Servers
// Link to the problem: https://leetcode.com/problems/count-zero-request-servers/
class Solution
{
public:
    vector<int> countServers(int n, vector<vector<int>> &logs, int x, vector<int> &queries)
    {
        const int m = queries.size(), k = logs.size();
        sort(logs.begin(), logs.end(), [](const vector<int> &p, const vector<int> &q)
             { return p[1] < q[1]; });
        vector<pair<int, int>> a(m);
        for (int i = 0; i < m; i++)
        {
            a[i] = {queries[i], i};
        }
        sort(a.begin(), a.end());
        vector<int> ans(m), b(n + 1);
        int l = 0, r = 0, y = 0;
        for (int i = 0; i < m; i++)
        {
            while (r < k && logs[r][1] <= a[i].first)
            {
                const int c = logs[r][0];
                r++;
                b[c]++;
                if (b[c] == 1)
                {
                    y++;
                }
            }
            while (l < r && logs[l][1] < a[i].first - x)
            {
                const int c = logs[l][0];
                l++;
                b[c]--;
                if (b[c] == 0)
                {
                    y--;
                }
            }
            ans[a[i].second] = n - y;
        }
        return ans;
    }
};