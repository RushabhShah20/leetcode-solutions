// Problem: Path Existence Queries in a Graph I
// Link to the problem: https://leetcode.com/problems/path-existence-queries-in-a-graph-i/
class Solution
{
public:
    vector<bool> pathExistenceQueries(int n, vector<int> &nums, int maxDiff, vector<vector<int>> &queries)
    {
        vector<int> a(n, 0);
        int x = 0;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] - nums[i - 1] > maxDiff)
            {
                x++;
            }
            a[i] = x;
        }
        vector<bool> ans;
        for (const vector<int> &query : queries)
        {
            ans.push_back(a[query[0]] == a[query[1]]);
        }
        return ans;
    }
};
