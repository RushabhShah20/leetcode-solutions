// Problem: Longest Palindromic Substring
// Link to the problem: https://leetcode.com/problems/longest-palindromic-substring/
class Solution
{
public:
    string longestPalindrome(string s)
    {
        const int n = s.size();
        vector<vector<bool>> dp(n + 1, vector<bool>(n + 1, false));
        string ans = "";
        int maxLen = -1;
        for (int k = 0; k < n; k++)
        {
            int i = 0, j = k;
            while (j < n)
            {
                if (k == 0)
                {
                    dp[i][j] = true;
                }
                else if (k == 1)
                {
                    dp[i][j] = (s[i] == s[j]);
                }
                else
                {
                    dp[i][j] = ((s[i] == s[j]) && (dp[i + 1][j - 1]));
                }
                if (dp[i][j] && maxLen < j - i + 1)
                {
                    ans = s.substr(i, j - i + 1);
                    maxLen = j - i + 1;
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};