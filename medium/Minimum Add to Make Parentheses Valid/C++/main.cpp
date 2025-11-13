// Problem: Minimum Add to Make Parentheses Valid
// Link to the problem: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
class Solution
{
public:
    int minAddToMakeValid(string s)
    {
        int ans = 0;
        stack<char> st;
        for (char c : s)
        {
            if (st.empty())
            {
                st.push(c);
            }
            else
            {
                if (st.top() == '(' && c == ')')
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
        }
        ans = st.size();
        return ans;
    }
};