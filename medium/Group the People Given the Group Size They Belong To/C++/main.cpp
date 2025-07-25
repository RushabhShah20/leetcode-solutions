// Problem: Group the People Given the Group Size They Belong To
// Link to the problem: https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/
class Solution
{
public:
    vector<vector<int>> groupThePeople(vector<int> &groupSizes)
    {
        map<int, vector<int>> x;
        for (int i = 0; i < groupSizes.size(); i++)
        {
            x[groupSizes[i]].push_back(i);
        }
        vector<vector<int>> ans;
        for (auto i : x)
        {
            for (int j = 0; j < i.second.size(); j += i.first)
            {
                vector<int> x(i.second.begin() + j, i.second.begin() + j + i.first);
                ans.push_back(x);
            }
        }
        return ans;
    }
};