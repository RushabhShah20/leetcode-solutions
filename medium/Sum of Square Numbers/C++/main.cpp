// Problem: Sum of Square Numbers
// Link to the problem: https://leetcode.com/problems/sum-of-square-numbers/
class Solution
{
public:
    unsigned long long int sqrt(unsigned long long int c)
    {
        if (c == 0)
            return 0;
        for (unsigned long long int i = 1; i <= c; i++)
        {
            unsigned long long int sum = i * i;
            if (sum == c)
                return i;
            else if (sum > c)
                return i - 1;
        }
        return -1;
    }

    bool judgeSquareSum(int c)
    {
        if (c == 0)
        {
            return true;
        }
        unsigned long long int left = 0, right = sqrt(c);
        while (left <= right)
        {
            unsigned long long int sum = ((left * left) + (right * right));
            if (sum == c)
            {
                return true;
            }
            else if (sum > c)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return false;
    }
};