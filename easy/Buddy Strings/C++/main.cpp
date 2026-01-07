// Problem: Buddy Strings
// Link to the problem: https://leetcode.com/problems/buddy-strings/
class Solution
{
public:
    bool buddyStrings(string s, string goal)
    {
        const int n = s.size(), m = goal.size();
        if (m != n)
        {
            return false;
        }
        else
        {
            if (s == goal)
            {
                set<char> t(s.begin(), s.end());
                if (t.size() < m)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                int i = 0, j = n - 1;
                while (i < n && s[i] == goal[i])
                {
                    i++;
                }
                while (j >= 0 && s[j] == goal[j])
                {
                    j--;
                }
                if (i < j)
                {
                    char temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
                if (s == goal)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
    }
};