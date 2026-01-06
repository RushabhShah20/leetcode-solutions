// Problem: Minimum Operations to Reduce an Integer to 0
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-reduce-an-integer-to-0/
class Solution
{
public:
    int minOperations(int n)
    {
        int ans = 0;
        while (n > 0)
        {
            if ((n & 1) == 0)
            {
                n >>= 1;
            }
            else
            {
                if ((n & 3) == 3)
                {
                    n++;
                    ans++;
                }
                else
                {
                    n--;
                    ans++;
                }
            }
        }
        return ans;
    }
};