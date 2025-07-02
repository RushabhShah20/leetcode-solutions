// Problem: Count Asterisks
// Link to the problem: https://leetcode.com/problems/count-asterisks/
class Solution
{
public:
    int countAsterisks(string s)
    {
        int ans = 0, count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '|')
            {
                count++;
            }
            if (count % 2 == 0)
            {
                if (s[i] == '*')
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};