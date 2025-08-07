// Problem: Adding Spaces to a String
// Link to the problem: https://leetcode.com/problems/adding-spaces-to-a-string/
class Solution
{
public:
    string addSpaces(string s, vector<int> &spaces)
    {
        string ans = "";
        int index = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i == spaces[index])
            {
                ans.push_back(' ');
                if (index < spaces.size() - 1)
                {
                    index++;
                }
            }
            ans.push_back(s[i]);
        }
        return ans;
    }
};