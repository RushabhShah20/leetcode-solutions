// Problem: Maximum Bitwise XOR After Rearrangement
// Link to the problem: https://leetcode.com/problems/maximum-bitwise-xor-after-rearrangement/
class Solution
{
public:
    string maximumXor(string s, string t)
    {
        const int n = s.size();
        int zero = 0, one = 0;
        for (const char c : t)
        {
            if (c == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        string ans(n, '0');
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (one > 0)
                {
                    ans[i] = '1';
                    one--;
                }
                else
                {
                    ans[i] = '0';
                    zero--;
                }
            }
            else
            {
                if (zero > 0)
                {
                    ans[i] = '1';
                    zero--;
                }
                else
                {
                    ans[i] = '0';
                    one--;
                }
            }
        }
        return ans;
    }
};