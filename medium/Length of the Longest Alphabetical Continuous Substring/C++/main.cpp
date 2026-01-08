// Problem: Length of the Longest Alphabetical Continuous Substring
// Link to the problem: https://leetcode.com/problems/length-of-the-longest-alphabetical-continuous-substring/
class Solution
{
public:
    int longestContinuousSubstring(string s)
    {
        const int n = s.size();
        int ans = 1, count = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] - s[i - 1] == 1)
            {
                count++;
            }
            else
            {
                ans = max(ans, count);
                count = 1;
            }
        }
        ans = max(ans, count);
        return ans;
    }
};