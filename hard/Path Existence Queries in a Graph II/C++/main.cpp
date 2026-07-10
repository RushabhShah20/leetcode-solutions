// Problem: Path Existence Queries in a Graph II
// Link to the problem: https://leetcode.com/problems/path-existence-queries-in-a-graph-ii/
class Solution
{
public:
    vector<int> pathExistenceQueries(int n, vector<int> &nums, int maxDiff, vector<vector<int>> &queries)
    {
        vector<int> a = nums;
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
        const int m = a.size();
        vector<int> b(m, 0);
        for (int i = 1; i < m; i++)
        {
            b[i] = a[i] - a[i - 1] <= maxDiff ? b[i - 1] : b[i - 1] + 1;
        }
        constexpr int k = 20;
        vector<vector<int>> c(k, vector<int>(m, 0));
        for (int i = 0; i < m; i++)
        {
            const auto it = upper_bound(a.begin(), a.end(), a[i] + maxDiff);
            c[0][i] = distance(a.begin(), it) - 1;
        }
        for (int j = 1; j < k; j++)
        {
            for (int i = 0; i < m; i++)
            {
                c[j][i] = c[j - 1][c[j - 1][i]];
            }
        }
        vector<int> ans;
        for (const vector<int> &query : queries)
        {
            if (query[0] == query[1])
            {
                ans.push_back(0);
                continue;
            }
            int x = nums[query[0]], y = nums[query[1]];
            if (x > y)
            {
                swap(x, y);
            }
            if (x == y)
            {
                ans.push_back(1);
                continue;
            }
            const int i1 = lower_bound(a.begin(), a.end(), x) - a.begin(), i2 = lower_bound(a.begin(), a.end(), y) - a.begin();
            if (b[i1] != b[i2])
            {
                ans.push_back(-1);
                continue;
            }
            if (a[i1] + maxDiff >= y)
            {
                ans.push_back(1);
                continue;
            }
            int j1 = i1, z = 0;
            for (int i = k - 1; i >= 0; i--)
            {
                const int j2 = c[i][j1];
                if (a[j2] + maxDiff < y)
                {
                    j1 = j2;
                    z += 1 << i;
                }
            }
            ans.push_back(z + 2);
        }
        return ans;
    }
};
