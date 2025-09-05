// Problem: Minimum Operations to Make the Integer Zero
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-the-integer-zero/
class Solution
{
public:
    int makeTheIntegerZero(int num1, int num2)
    {
        for (int k = 1; k <= 60; k++)
        {
            long long x = num1 - 1LL * num2 * k;
            if (x < k)
            {
                return -1;
            }
            if (k >= __builtin_popcountll(x))
            {
                return k;
            }
        }
        return -1;
    }
};