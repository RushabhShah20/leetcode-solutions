// Problem: Palindrome Permutation
// Link to the problem: https://leetcode.com/problems/palindrome-permutation/
class Solution
{
public:
    bool canPermutePalindrome(string s)
    {
        const int n = s.size();
        vector<int> a(26);
        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'a']++;
        }
        int x = 0;
        for (int i = 0; i < 26; i++)
        {
            x += a[i] & 1;
        }
        const bool ans = x <= 1;
        return ans;
    }
};