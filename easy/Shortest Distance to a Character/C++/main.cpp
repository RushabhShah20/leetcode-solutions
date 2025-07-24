// Problem: Shortest Distance to a Character
// Link to the problem: https://leetcode.com/problems/shortest-distance-to-a-character/
class Solution
{
public:
    vector<int> shortestToChar(string s, char c)
    {
        vector<int> ans(s.size(), INT_MAX);
        vector<int> indices;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == c)
            {
                indices.push_back(i);
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < indices.size(); j++)
            {
                ans[i] = min(ans[i], abs(i - indices[j]));
            }
        }
        return ans;
    }
};