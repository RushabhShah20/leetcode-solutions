// Problem: Remove Methods From Project
// Link to the problem: https://leetcode.com/problems/remove-methods-from-project/
class Solution
{
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>> &invocations)
    {
        constexpr int mx = 100005;
        vector<vector<int>> g(n);
        vector<int> a(n, 0);
        bitset<mx> b;
        for (const vector<int> &invocation : invocations)
        {
            g[invocation[0]].push_back(invocation[1]);
            a[invocation[1]]++;
        }
        queue<int> q;
        q.push(k);
        b.set(k);
        while (!q.empty())
        {
            const int u = q.front();
            q.pop();
            for (const int v : g[u])
            {
                a[v]--;
                if (!b.test(v))
                {
                    q.push(v);
                    b.set(v);
                }
            }
        }
        bool x = true;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (b.test(i) && a[i] > 0)
            {
                x = false;
                break;
            }
            else if (!b.test(i))
            {
                ans.push_back(i);
            }
        }
        if (!x)
        {
            vector<int> v(n);
            for (int i = 0; i < n; i++)
            {
                v[i] = i;
            }
            return v;
        }
        return ans;
    }
};