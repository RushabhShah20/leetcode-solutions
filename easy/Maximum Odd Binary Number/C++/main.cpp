// Problem: Maximum Odd Binary Number
// Link to the problem: https://leetcode.com/problems/maximum-odd-binary-number/
class Solution
{
public:
    string maximumOddBinaryNumber(string s)
    {
        string ans = "";
        int count_0 = 0, count_1 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                count_0++;
            }
            else
            {
                count_1++;
            }
        }
        for (int i = 0; i < count_1 - 1; i++)
        {
            ans = ans + '1';
        }
        for (int i = 0; i < count_0; i++)
        {
            ans = ans + '0';
        }
        ans = ans + '1';
        return ans;
    }
};