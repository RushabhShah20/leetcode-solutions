// Problem: Find the Longest Balanced Substring of a Binary String
// Link to the problem: https://leetcode.com/problems/find-the-longest-balanced-substring-of-a-binary-string/
class Solution
{
public:
    int findTheLongestBalancedSubstring(string s)
    {
        const int n = s.size();
        int ans = 0, i = 0;
        while (i < n)
        {
            int x = 0, y = 0;
            while (i < n && s[i] == '0')
            {
                x++;
                i++;
            }
            while (i < n && s[i] == '1')
            {
                y++;
                i++;
            }
            ans = max(ans, min(x, y) << 1);
        }
        return ans;
    }
};