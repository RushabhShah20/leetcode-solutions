// Problem: Split a String in Balanced Strings
// Link to the problem: https://leetcode.com/problems/split-a-string-in-balanced-strings/
class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int ans = 0, count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'L')
            {
                count++;
            }
            if (s[i] == 'R')
            {
                count--;
            }
            if (count == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};