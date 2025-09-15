// Problem: License Key Formatting
// Link to the problem: https://leetcode.com/problems/license-key-formatting/
class Solution
{
public:
    string licenseKeyFormatting(string s, int k)
    {
        string ans = "";
        vector<char> a;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '-')
            {
                continue;
            }
            else
            {
                if (isdigit(s[i]))
                {
                    a.push_back(s[i]);
                }
                else
                {
                    a.push_back(toupper(s[i]));
                }
            }
        }
        for (int i = 0; i < a.size(); i++)
        {
            ans.append(1, a[i]);
            if ((i + 1) % k == ((k + (a.size() % k)) % k))
            {
                if (i != a.size() - 1)
                {
                    ans.append(1, '-');
                }
            }
        }
        return ans;
    }
};