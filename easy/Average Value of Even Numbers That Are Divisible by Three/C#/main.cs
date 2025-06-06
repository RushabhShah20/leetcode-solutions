// Problem: Average Value of Even Numbers That Are Divisible by Three
// Link to the problem: https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three/
public class Solution
{
    public int AverageValue(int[] nums)
    {
        int i;
        int sum = 0, s = 0;
        for (i = 0; i < nums.Length; i++)
        {
            if (nums[i] % 6 == 0)
            {
                sum += nums[i];
                s++;
            }
        }
        if (s == 0)
            return 0;
        else
            return sum / s;
    }
}