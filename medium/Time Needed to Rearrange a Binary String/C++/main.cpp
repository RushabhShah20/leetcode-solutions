// Problem: Time Needed to Rearrange a Binary String
// Link to the problem: https://leetcode.com/problems/time-needed-to-rearrange-a-binary-string/
class Solution
{
public:
    int secondsToRemoveOccurrences(string s)
    {
        int ans = 0, count = 0;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                count++;
            }
            else if (count > 0)
            {
                ans = max(ans + 1, count);
            }
        }
        return ans;
    }
};