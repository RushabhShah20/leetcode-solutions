// Problem: Sort the People
// Link to the problem: https://leetcode.com/problems/sort-the-people/
class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        vector<pair<string, int>> a;
        for (int i = 0; i < names.size(); i++)
        {
            a.push_back(make_pair(names[i], heights[i]));
        }
        sort(a.begin(), a.end(), [](const auto &x, const auto &y)
             { return greater<int>{}(x.second, y.second); });
        vector<string> ans;
        for (int i = 0; i < a.size(); i++)
        {
            ans.push_back(a[i].first);
        }
        return ans;
    }
};