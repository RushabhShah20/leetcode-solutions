// Problem: Hexadecimal and Hexatrigesimal Conversion
// Link to the problem: https://leetcode.com/problems/hexadecimal-and-hexatrigesimal-conversion/
class Solution
{
public:
    string toHexDec(int num)
    {
        string ans;
        if (num == 0)
        {
            return "0";
        }
        unsigned int n = num;
        string hex = "0123456789ABCDEF";
        while (n > 0)
        {
            ans += hex[n % 16];
            n /= 16;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    string toHextri(int num)
    {
        string ans;
        if (num == 0)
        {
            return "0";
        }
        unsigned int n = num;
        string hex = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        while (n > 0)
        {
            ans += hex[n % 36];
            n /= 36;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    string concatHex36(int n)
    {
        return toHexDec(n * n) + toHextri(n * n * n);
    }
};