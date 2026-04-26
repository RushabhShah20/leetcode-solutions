// Problem: Valid Digit Number
// Link to the problem: https://leetcode.com/problems/valid-digit-number/
class Solution
{
public:
    bool validDigit(int n, int x)
    {
        const string s = to_string(n);
        if (s[0] - '0' == x)
        {
            return false;
        }
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] - '0' == x)
            {
                return true;
            }
        }
        return false;
    }
};
