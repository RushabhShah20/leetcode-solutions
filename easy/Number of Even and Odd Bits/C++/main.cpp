// Problem: Number of Even and Odd Bits
// Link to the problem: https://leetcode.com/problems/number-of-even-and-odd-bits/
class Solution
{
public:
    long long int toBinary(int n)
    {
        long long int ans = 0, i = 1;
        while (n > 0)
        {
            long long int rem = n % 2;
            ans += rem * i;
            n /= 2;
            i *= 10;
        }
        return ans;
    }
    vector<int> evenOddBit(int n)
    {
        vector<int> ans(2, 0);
        string binary_n = to_string(toBinary(n));
        for (int i = 0; i < binary_n.size(); i++)
        {
            if (binary_n.size() % 2 == 0)
            {
                if (i % 2 == 0)
                {
                    if (binary_n[i] == '1')
                    {
                        ans[1]++;
                    }
                }
                else
                {
                    if (binary_n[i] == '1')
                    {
                        ans[0]++;
                    }
                }
            }
            else
            {
                if (i % 2 != 0)
                {
                    if (binary_n[i] == '1')
                    {
                        ans[1]++;
                    }
                }
                else
                {
                    if (binary_n[i] == '1')
                    {
                        ans[0]++;
                    }
                }
            }
        }
        return ans;
    }
};