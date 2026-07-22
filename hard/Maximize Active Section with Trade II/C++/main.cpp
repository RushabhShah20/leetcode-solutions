// Problem: Maximize Active Section with Trade II
// Link to the problem: https://leetcode.com/problems/maximize-active-section-with-trade-ii/
class SparseTable
{
public:
    vector<vector<int>> st;
    SparseTable(const vector<int> &data)
    {
        st.push_back(data);
        int i = 1, n = st[0].size();
        while (2 * i <= n + 1)
        {
            const vector<int> &pre = st.back();
            vector<int> cur;
            for (int j = 0; j < n - 2 * i + 1; j++)
            {
                cur.push_back(max(pre[j], pre[j + i]));
            }
            st.push_back(cur);
            i <<= 1;
        }
    }
    int query(const int l, const int r)
    {
        if (l > r)
        {
            return 0;
        }
        const int n = r - l + 1;
        int k = 0;
        while ((1 << (k + 1)) <= n)
        {
            k++;
        }
        return max(st[k][l], st[k][r - (1 << k) + 1]);
    }
};

class Solution
{
public:
    vector<int> maxActiveSectionsAfterTrade(string s, vector<vector<int>> &queries)
    {
        const int n = s.size();
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            x += s[i] - '0';
        }
        vector<int> k, l, r;
        int i = 0;
        while (i < n)
        {
            int j = i;
            while (i < n && s[i] == s[j])
            {
                i += 1;
            }
            if (s[j] == '0')
            {
                k.push_back(i - j);
                l.push_back(j);
                r.push_back(i - 1);
            }
        }
        const int m = k.size();
        if (m < 2)
        {
            return vector<int>(queries.size(), x);
        }
        vector<int> a(m - 1);
        for (i = 0; i < m - 1; i++)
        {
            a[i] = k[i] + k[i + 1];
        }
        SparseTable st(a);
        vector<int> ans;
        for (const vector<int> &query : queries)
        {
            const int q0 = query[0], q1 = query[1];
            const int i1 = lower_bound(r.begin(), r.end(), q0) - r.begin(), j1 = upper_bound(l.begin(), l.end(), q1) - l.begin() - 1;
            if (i1 > m - 1 || j1 < 0 || i1 >= j1)
            {
                ans.push_back(x);
                continue;
            }
            const int b = r[i1] - max(l[i1], q0) + 1, c = min(r[j1], q1) - l[j1] + 1;
            if (i1 + 1 == j1)
            {
                const int y = b + c;
                ans.push_back(x + y);
                continue;
            }
            const int y1 = b + k[i1 + 1], y2 = k[j1 - 1] + c, y3 = st.query(i1 + 1, j1 - 2);
            const int y = max({y1, y2, y3});
            ans.push_back(x + y);
        }
        return ans;
    }
};