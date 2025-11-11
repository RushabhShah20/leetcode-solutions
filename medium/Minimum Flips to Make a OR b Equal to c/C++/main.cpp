// Problem: Minimum Flips to Make a OR b Equal to c
// Link to the problem: https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/
class Solution
{
public:
    int minFlips(int a, int b, int c)
    {
        int ans = 0;
        bitset<32> x(a), y(b), z(c);
        for (int i = 0; i < 32; i++)
        {
            if ((x[i] | y[i]) != z[i])
            {
                if (z[i] == 1)
                {
                    ans++;
                }
                else
                {
                    if (x[i] == 1 && y[i] == 1)
                    {
                        ans += 2;
                    }
                    else
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};