// Problem: Find Players With Zero or One Losses
// Link to the problem: https://leetcode.com/problems/find-players-with-zero-or-one-losses/
class Solution
{
public:
    vector<vector<int>> findWinners(vector<vector<int>> &matches)
    {
        vector<vector<int>> ans(2);
        map<int, pair<int, int>> m;
        for (int i = 0; i < matches.size(); i++)
        {
            m[matches[i][0]].first++;
            m[matches[i][1]].second++;
        }
        for (auto i : m)
        {
            if (i.second.second == 0)
            {
                ans[0].push_back(i.first);
            }
            else if (i.second.second == 1)
            {
                ans[1].push_back(i.first);
            }
        }
        return ans;
    }
};