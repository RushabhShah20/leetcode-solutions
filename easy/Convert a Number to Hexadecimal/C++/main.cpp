// Problem: Convert a Number to Hexadecimal
// Link to the problem: https://leetcode.com/problems/convert-a-number-to-hexadecimal/
class Solution
{
public:
    string toHex(int num)
    {
        string ans;
        if (num == 0)
        {
            return "0";
        }
        unsigned int n = num;
        string hex = "0123456789abcdef";
        while (n > 0)
        {
            ans += hex[n % 16];
            n /= 16;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};