// Problem: Number of Changing Keys
// Link to the problem: https://leetcode.com/problems/number-of-changing-keys/
class Solution
{
public:
    int countKeyChanges(string s)
    {
        int ans = 0;
        for (int i = 1; i < s.size(); i++)
        {
            if (tolower(s[i]) != tolower(s[i - 1]))
            {
                ans++;
            }
        }
        return ans;
    }
};