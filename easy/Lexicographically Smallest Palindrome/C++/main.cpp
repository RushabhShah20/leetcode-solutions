// Problem: Lexicographically Smallest Palindrome
// Link to the problem: https://leetcode.com/problems/lexicographically-smallest-palindrome/
class Solution
{
public:
    string makeSmallestPalindrome(string s)
    {
        int n = s.size();
        int left = 0, right = n - 1;
        while (left < right)
        {
            if (s[left] != s[right])
            {
                if (s[left] < s[right])
                {
                    s[right] = s[left];
                }
                else
                {
                    s[left] = s[right];
                }
            }
            left++;
            right--;
        }
        return s;
    }
};