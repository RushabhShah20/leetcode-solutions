// Problem: Reverse Substrings Between Each Pair of Parentheses
// Link to the problem: https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/
class Solution
{
public:
    string reverseParentheses(string s)
    {
        const int n = s.size();
        stack<int> st;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '(')
            {
                st.push(i);
            }
            if (s[i] == ')')
            {
                const int j = st.top();
                st.pop();
                a[i] = j;
                a[j] = i;
            }
        }
        string ans;
        int j = 1;
        for (int i = 0; i < n; i += j)
        {
            if (s[i] == '(' || s[i] == ')')
            {
                i = a[i];
                j *= -1;
            }
            else
            {
                ans += s[i];
            }
        }
        return ans;
    }
};