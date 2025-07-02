// Problem: Clear Digits
// Link to the problem: https://leetcode.com/problems/clear-digits/
class Solution
{
public:
    string clearDigits(string s)
    {
        stack<char> t;
        for (int i = 0; i < s.size(); i++)
        {
            t.push(s[i]);
            if (isdigit(t.top()))
            {
                t.pop();
                t.pop();
            }
        }
        string ans = "";
        while (!t.empty())
        {
            ans.push_back(t.top());
            t.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};