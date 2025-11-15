// Problem: Count Integers With Even Digit Sum
// Link to the problem: https://leetcode.com/problems/count-integers-with-even-digit-sum/
public class Solution
{
    public int CountEven(int num)
    {
        int count = 0;
        for (int i = 1; i <= num; i++)
        {
            int sum = 0;
            int n = i;
            while (n != 0)
            {
                sum += n % 10;
                n /= 10;
            }
            if (sum % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }
}