// Problem: Valid Palindrome
// Link to the problem: https://leetcode.com/problems/valid-palindrome/
class Solution
{
public:
    bool Palidrome(string s)
    {
        int left = 0, right = s.size() - 1;
        while (left < right)
        {
            if (s[left++] != s[right--])
            {
                return false;
            }
        }
        return true;
    }
    bool isPalindrome(string s)
    {
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (isupper(s[i]) || islower(s[i]) || isdigit(s[i]))
            {
                if (isupper(s[i]))
                {
                    ans += tolower(s[i]);
                }
                else
                {
                    ans += s[i];
                }
            }
        }
        return Palidrome(ans);
    }
};