// Problem: Check ASCII Palindromic
// Link to the problem: https://leetcode.com/problems/check-ascii-palindromic/
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
    bool isPalindromic(string s)
    {
        const int n = s.size();
        string t;
        for (int i = 0; i < n; i++)
        {
            t.append(bitset<8>(s[i]).to_string());
        }
        const int m = t.size();
        const bool ans = isPalindrome(t, 0, m - 1);
        return ans;
    }
};
