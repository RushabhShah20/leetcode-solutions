// Problem: Resulting String After Adjacent Removals
// Link to the problem: https://leetcode.com/problems/resulting-string-after-adjacent-removals/
class Solution
{
public:
    string resultingString(string s)
    {
        int n = s.size();
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            if (st.empty())
            {
                st.push(s[i] - 'a');
            }
            else
            {
                if ((abs((s[i] - 'a') - st.top()) == 1) || (abs((s[i] - 'a') - st.top()) == 25))
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i] - 'a');
                }
            }
        }
        string ans;
        while (!st.empty())
        {
            ans.append(1, (st.top() + 'a'));
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};