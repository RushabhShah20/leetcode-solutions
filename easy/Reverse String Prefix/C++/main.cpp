// Problem: Reverse String Prefix
// Link to the problem: https://leetcode.com/problems/reverse-string-prefix/
class Solution
{
public:
    string reversePrefix(string s, int k)
    {
        reverse(s.begin(), s.begin() + k);
        return s;
    }
};