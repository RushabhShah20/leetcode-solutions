// Problem: Valid Parentheses
// Link to the problem: https://leetcode.com/problems/valid-parentheses/
class Solution
{
public:
    bool isValid(string s)
    {
        const int n = s.size();
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }
                const char x = st.top(), y = s[i];
                if ((x == '(' && y == ')') || (x == '{' && y == '}') || (x == '[' && y == ']'))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        const bool ans = st.empty();
        return ans;
    }
};