// Problem: Remove All Adjacent Duplicates in String II
// Link to the problem: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/
class Solution
{
public:
    string removeDuplicates(string s, int k)
    {
        const int n = s.size();
        stack<pair<char, int>> st;
        for (int i = 0; i < n; i++)
        {
            if (!st.empty() && s[i] == st.top().first)
            {
                pair<char, int> x = st.top();
                st.pop();
                x.second++;
                if (x.second != k)
                {
                    st.push(x);
                }
            }
            else
            {
                st.push(make_pair(s[i], 1));
            }
        }
        string ans = "";
        while (!st.empty())
        {
            ans.append(st.top().second, st.top().first);
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};