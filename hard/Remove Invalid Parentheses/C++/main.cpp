// Problem: Remove Invalid Parentheses
// Link to the problem: https://leetcode.com/problems/remove-invalid-parentheses/
class Solution
{
public:
    vector<string> ans;
    void dfs(string s, const int l, const int r, const char o, const char c)
    {
        const int n = s.size();
        int x = 0;
        for (int i = l; i < n; i++)
        {
            if (s[i] == o)
            {
                x++;
            }
            if (s[i] == c)
            {
                x--;
            }
            if (x >= 0)
            {
                continue;
            }
            for (int j = r; j <= i; j++)
            {
                if (s[j] == c && (j == r || s[j - 1] != c))
                {
                    dfs(s.substr(0, j) + s.substr(j + 1), i, j, o, c);
                }
            }
            return;
        }
        reverse(s.begin(), s.end());
        if (o == '(')
        {
            dfs(s, 0, 0, ')', '(');
        }
        else
        {
            ans.push_back(s);
        }
    }
    vector<string> removeInvalidParentheses(string s)
    {
        dfs(s, 0, 0, '(', ')');
        return ans;
    }
};