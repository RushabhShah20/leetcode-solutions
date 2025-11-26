// Problem: Valid Palindrome II
// Link to the problem: https://leetcode.com/problems/valid-palindrome-ii/
class Solution
{
public:
    bool isPalidrome(string s, int i, int j)
    {
        while (i < j)
        {
            if (s[i] != s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s)
    {
        int n = s.size(), i = 0, j = n - 1;
        while (i < j)
        {
            if (s[i] != s[j])
            {
                return isPalidrome(s, i + 1, j) || isPalidrome(s, i, j - 1);
            }
            i++;
            j--;
        }
        return true;
    }
};