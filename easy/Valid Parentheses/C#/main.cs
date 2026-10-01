// Problem: Valid Parentheses
// Link to the problem: https://leetcode.com/problems/valid-parentheses/
public class Solution
{
    public bool IsValid(string s)
    {
        int n = s.Length;
        Stack<char> st = new Stack<char>();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.Push(s[i]);
            }
            else
            {
                if (st.Count == 0)
                {
                    return false;
                }
                char x = st.Peek(), y = s[i];
                if ((x == '(' && y == ')') || (x == '{' && y == '}') || (x == '[' && y == ']'))
                {
                    st.Pop();
                }
                else
                {
                    return false;
                }
            }
        }
        bool ans = st.Count == 0;
        return ans;
    }
}