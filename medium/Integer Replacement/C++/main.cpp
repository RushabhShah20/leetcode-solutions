// Problem: Integer Replacement
// Link to the problem: https://leetcode.com/problems/integer-replacement/
class Solution
{
public:
    int integerReplacement(int n)
    {
        long long m = n;
        int ans = 0;
        while (m > 1)
        {
            if (m == 3 || m % 4 == 1)
            {
                m--;
            }
            else if (m % 2 == 0)
            {
                m /= 2;
            }
            else
            {
                m++;
            }
            ans++;
        }
        return ans;
    }
};