// Problem: Reverse String
// Link to the problem: https://leetcode.com/problems/reverse-string/
class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int start = 0;
        int end = s.size() - 1;
        while (start < end)
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
};