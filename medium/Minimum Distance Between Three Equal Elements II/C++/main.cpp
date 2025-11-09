// Problem: Minimum Distance Between Three Equal Elements II
// Link to the problem: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-ii/
class Solution
{
public:
    int minimumDistance(vector<int> &nums)
    {
        map<int, vector<int>> x;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            x[nums[i]].push_back(i);
        }
        int ans = INT_MAX;
        for (pair<int, vector<int>> i : x)
        {
            vector<int> y = i.second;
            if (y.size() < 3)
            {
                continue;
            }
            sort(y.begin(), y.end());
            for (int j = 0; j + 2 < y.size(); j++)
            {
                ans = min(ans, 2 * (y[j + 2] - y[j]));
            }
        }
        return (ans == INT_MAX) ? (-1) : (ans);
    }
};