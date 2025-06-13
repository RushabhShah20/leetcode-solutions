// Problem: Faulty Keyboard
// Link to the problem: https://leetcode.com/problems/faulty-keyboard/
class Solution
{
public:
    string finalString(string s)
    {
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'i')
            {
                reverse(ans.begin(), ans.end());
            }
            else
            {
                ans = ans + s[i];
            }
        }
        return ans;
    }
};