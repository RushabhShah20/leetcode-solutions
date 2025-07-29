// Problem: Reverse String II
// Link to the problem: https://leetcode.com/problems/reverse-string-ii/
class Solution
{
public:
    string reverseStr(string s, int k)
    {
        for (int i = 0; i < s.size(); i += k)
        {
            if ((i / k) % 2 == 0)
            {
                reverse(s.begin() + i, s.begin() + min(i + k, (int)(s.size())));
            }
        }
        return s;
    }
};