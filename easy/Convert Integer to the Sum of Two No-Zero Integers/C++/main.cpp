// Problem: Convert Integer to the Sum of Two No-Zero Integers
// Link to the problem: https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/
class Solution
{
public:
    bool isNonZero(int n)
    {
        while (n > 0)
        {
            if (n % 10 == 0)
            {
                return false;
            }
            n /= 10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            if (isNonZero(i) && isNonZero(n - i))
            {
                return {i, n - i};
            }
        }
        return {};
    }
};