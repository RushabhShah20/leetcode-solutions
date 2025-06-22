// Problem: Sum of Digits of String After Convert
// Link to the problem: https://leetcode.com/problems/sum-of-digits-of-string-after-convert/
class Solution
{
public:
    int getLucky(string s, int k)
    {
        string x = "";
        for (char ch : s)
        {
            int y = ch - 'a' + 1;
            x += to_string(y);
        }
        int ans = 0;
        for (int i = 0; i < k; i++)
        {
            ans = 0;
            for (char ch : x)
            {
                ans += (ch - '0');
            }
            x = to_string(ans);
        }
        return ans;
    }
};