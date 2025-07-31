// Problem: Remove Palindromic Subsequences
// Link to the problem: https://leetcode.com/problems/remove-palindromic-subsequences/
class Solution
{
public:
    int removePalindromeSub(string s)
    {
        int n = s.size();
        bool isPalindrome = true;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - i - 1])
            {
                isPalindrome = false;
                break;
            }
        }
        if (isPalindrome == true)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
};