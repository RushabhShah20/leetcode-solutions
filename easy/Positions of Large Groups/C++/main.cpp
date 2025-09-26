// Problem: Positions of Large Groups
// Link to the problem: https://leetcode.com/problems/positions-of-large-groups/
class Solution
{
public:
    vector<vector<int>> largeGroupPositions(string s)
    {
        vector<vector<int>> ans;
        int count = 1;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                count++;
            }
            else
            {
                if (count >= 3)
                {
                    ans.push_back({i - count, i - 1});
                }
                count = 1;
            }
        }
        if (count >= 3)
        {
            ans.push_back({(int)(s.size() - count), (int)(s.size() - 1)});
        }
        return ans;
    }
};