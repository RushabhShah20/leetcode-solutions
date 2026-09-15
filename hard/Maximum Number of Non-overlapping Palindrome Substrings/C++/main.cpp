// Problem: Maximum Number of Non-overlapping Palindrome Substrings
// Link to the problem: https://leetcode.com/problems/maximum-number-of-non-overlapping-palindrome-substrings/
class Solution
{
public:
    bool isPalindrome(const string &s, int l, int r)
    {
        while (l <= r)
        {
            if (s[l] != s[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    int maxPalindromes(string s, int k)
    {
        const int n = s.size();
        int ans = 0, i = 0;
        for (int r = k - 1; r < n; r++)
        {
            int l = r - k + 1;
            if (l >= i && isPalindrome(s, l, r))
            {
                ans++;
                i = r + 1;
                continue;
            }
            l = r - k;
            if (l >= i && isPalindrome(s, l, r))
            {
                ans++;
                i = r + 1;
            }
        }
        return ans;
    }
};