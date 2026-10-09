// Problem: Minimum Insertions to Balance a Parentheses String
// Link to the problem: https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/
class Solution
{
public:
    int minInsertions(string s)
    {
        const int n = s.size();
        int ans = 0, x = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                if (x & 1)
                {
                    ans++;
                    x++;
                }
                else
                {
                    x += 2;
                }
            }
            else if (x == 0)
            {
                ans++;
                x = 1;
            }
            else
            {
                x--;
            }
        }
        ans += x;
        return ans;
    }
};