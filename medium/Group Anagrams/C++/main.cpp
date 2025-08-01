// Problem: Group Anagrams
// Link to the problem: https://leetcode.com/problems/group-anagrams/
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        map<map<char, int>, vector<string>> x;
        for (int i = 0; i < strs.size(); i++)
        {
            map<char, int> y;
            for (int j = 0; j < strs[i].size(); j++)
            {
                y[strs[i][j]]++;
            }
            x[y].push_back(strs[i]);
        }
        for (auto i : x)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};