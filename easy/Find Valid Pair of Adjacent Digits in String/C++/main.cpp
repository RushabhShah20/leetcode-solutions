// Problem: Find Valid Pair of Adjacent Digits in String
// Link to the problem: https://leetcode.com/problems/find-valid-pair-of-adjacent-digits-in-string/
class Solution
{
public:
    string findValidPair(string s)
    {
        string ans = "";
        map<int, int> m;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i] - '0']++;
        }
        for (int i = 0; i < s.size() - 1; i++)
        {
            if ((s[i] != s[i + 1]) && ((s[i] - '0') == m[s[i] - '0']) && ((s[i + 1] - '0') == m[s[i + 1] - '0']))
            {
                ans = s.substr(i, 2);
                break;
            }
        }
        return ans;
    }
};