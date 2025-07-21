// Problem: Find the Sequence of Strings Appeared on the Screen
// Link to the problem: https://leetcode.com/problems/find-the-sequence-of-strings-appeared-on-the-screen/
class Solution
{
public:
    vector<string> stringSequence(string target)
    {
        vector<string> ans;
        for (int i = 0; i < target.size(); i++)
        {
            for (int j = 0; j < target[i] - 'a' + 1; j++)
            {
                string x = target.substr(0, i);
                x += ('a' + j);
                ans.push_back(x);
            }
        }
        return ans;
    }
};