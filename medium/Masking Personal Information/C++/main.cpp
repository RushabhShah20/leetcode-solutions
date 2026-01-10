// Problem: Masking Personal Information
// Link to the problem: https://leetcode.com/problems/masking-personal-information/
class Solution
{
public:
    string maskPII(string s)
    {
        const int n = s.size();
        int a = s.find('@');
        string ans = "";
        if (a != s.npos)
        {
            ans.append(1, tolower(s[0]));
            ans.append(5, '*');
            ans.append(1, tolower(s[a - 1]));
            ans.append(1, '@');
            for (int i = a + 1; i < n; i++)
            {
                ans.append(1, tolower(s[i]));
            }
        }
        else
        {
            int count = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                if (isdigit(s[i]))
                {
                    if (count >= 4)
                    {
                        ans.insert(0, 1, '*');
                    }
                    else
                    {
                        ans.insert(0, 1, s[i]);
                    }
                    count++;
                }
            }
            if (ans.size() > 10)
            {
                ans.insert(0, 1, '+');
            }
            count = 0;
            int underscore = 1;
            ans.insert(ans.size() - 4, 1, '-');
            for (int i = ans.size() - 5; i >= 1; i--)
            {
                if (count == 3)
                {
                    if (underscore < 3)
                    {
                        ans.insert(i, 1, '-');
                        underscore++;
                    }
                    count = 1;
                }
                else
                {
                    count++;
                }
            }
        }
        return ans;
    }
};