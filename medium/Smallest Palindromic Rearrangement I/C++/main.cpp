// Problem: Smallest Palindromic Rearrangement I
// Link to the problem: https://leetcode.com/problems/smallest-palindromic-rearrangement-i/
class Solution
{
public:
    string smallestPalindrome(string s)
    {
        string ans = s;
        if (s.size() <= 1)
        {
            return s;
        }
        int mid = s.size() / 2;
        sort(ans.begin(), ans.begin() + mid);
        sort(ans.end() - mid, ans.end(), greater<char>());
        return ans;
    }
};