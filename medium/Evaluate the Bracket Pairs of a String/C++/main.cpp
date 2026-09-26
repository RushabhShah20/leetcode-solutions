// Problem: Evaluate the Bracket Pairs of a String
// Link to the problem: https://leetcode.com/problems/evaluate-the-bracket-pairs-of-a-string/
class Solution
{
public:
    string evaluate(string s, vector<vector<string>> &knowledge)
    {
        const int n = s.size(), k = knowledge.size();
        unordered_map<string, string> m;
        for (int i = 0; i < k; i++)
        {
            m[knowledge[i][0]] = knowledge[i][1];
        }
        bool x = false;
        string t, ans;
        for (int i = 0; i < n; i++)
        {
            const char c = s[i];
            if (c == '(')
            {
                x = true;
            }
            else if (c == ')')
            {
                if (m.count(t) > 0)
                {
                    ans += m[t];
                }
                else
                {
                    ans.push_back('?');
                }
                x = false;
                t.clear();
            }
            else if (x)
            {
                t.push_back(c);
            }
            else
            {
                ans.push_back(c);
            }
        }
        return ans;
    }
};