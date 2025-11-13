// Problem: Minimum Add to Make Parentheses Valid
// Link to the problem: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
public class Solution
{
    public int MinAddToMakeValid(string s)
    {
        int ans = 0;
        Stack<char> st = new Stack<char>();
        foreach (char c in s)
        {
            if (st.Count == 0)
            {
                st.Push(c);
            }
            else
            {
                if (st.Peek() == '(' && c == ')')
                {
                    st.Pop();
                }
                else
                {
                    st.Push(c);
                }
            }
        }
        ans = st.Count;
        return ans;
    }
}