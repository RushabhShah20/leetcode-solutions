// Problem: DI String Match
// Link to the problem: https://leetcode.com/problems/di-string-match/
class Solution
{
public:
    vector<int> diStringMatch(string s)
    {
        vector<int> ans;
        vector<int> base(s.size() + 1);
        for (int i = 0; i < s.size() + 1; i++)
        {
            base[i] = i;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'I')
            {
                ans.push_back(base.front());
                base.erase(base.begin());
            }
            else if (s[i] == 'D')
            {
                ans.push_back(base.back());
                base.erase(base.end() - 1);
            }
        }
        ans.push_back(base.front());
        return ans;
    }
};