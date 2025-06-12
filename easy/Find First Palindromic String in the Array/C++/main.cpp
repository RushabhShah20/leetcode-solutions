// Problem: Find First Palindromic String in the Array
// Link to the problem: https://leetcode.com/problems/find-first-palindromic-string-in-the-array/
class Solution
{
public:
    bool isPalidrome(string s)
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
    string firstPalindrome(vector<string> &words)
    {
        for (int i = 0; i < words.size(); i++)
        {
            if (isPalidrome(words[i]))
            {
                return words[i];
            }
        }
        return "";
    }
};