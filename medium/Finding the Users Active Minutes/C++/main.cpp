// Problem: Finding the Users Active Minutes
// Link to the problem: https://leetcode.com/problems/finding-the-users-active-minutes/
class Solution
{
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>> &logs, int k)
    {
        vector<int> ans(k, 0);
        unordered_map<int, unordered_set<int>> x;
        for (const vector<int> log : logs)
        {
            x[log[0]].insert(log[1]);
        }
        for (const pair<int, unordered_set<int>> i : x)
        {
            ans[i.second.size() - 1]++;
        }
        return ans;
    }
};