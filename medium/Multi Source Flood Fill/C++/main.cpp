// Problem: Multi Source Flood Fill
// Link to the problem: https://leetcode.com/problems/multi-source-flood-fill/
class Solution
{
public:
    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>> &sources)
    {
        vector<vector<int>> ans(n, vector<int>(m, 0));
        priority_queue<tuple<int, int, int, int>> pq;
        for (const vector<int> &source : sources)
        {
            pq.push({0, source[2], source[0], source[1]});
        }
        const vector<pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        while (!pq.empty())
        {
            const tuple<int, int, int, int> x = pq.top();
            pq.pop();
            const int r = get<2>(x), c = get<3>(x);
            if (ans[r][c] != 0)
            {
                continue;
            }
            ans[r][c] = get<1>(x);
            for (int i = 0; i < 4; i++)
            {
                const int j = r + dirs[i].first, k = c + dirs[i].second;
                if (j >= 0 && j < n && k >= 0 && k < m && ans[j][k] == 0)
                {
                    pq.push({get<0>(x) - 1, get<1>(x), j, k});
                }
            }
        }
        return ans;
    }
};