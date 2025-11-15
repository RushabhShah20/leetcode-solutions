// Problem: Count Integers With Even Digit Sum
// Link to the problem: https://leetcode.com/problems/count-integers-with-even-digit-sum/
class Solution
{
public:
    int countEven(int num)
    {
        int count = 0;
        for (int i = 1; i <= num; i++)
        {
            int sum = 0;
            int n = i;
            while (n != 0)
            {
                sum = sum + n % 10;
                n = n / 10;
            }
            if (sum % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }
};