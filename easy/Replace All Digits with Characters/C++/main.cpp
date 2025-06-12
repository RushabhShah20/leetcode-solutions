// Problem: Replace All Digits with Characters
// Link to the problem: https://leetcode.com/problems/replace-all-digits-with-characters/
class Solution
{
public:
    string replaceDigits(string s)
    {
        string ans = s;
        for (int i = 1; i < s.size(); i += 2)
        {
            ans[i] = ans[i] - 48 + ans[i - 1];
        }
        return ans;
    }
};