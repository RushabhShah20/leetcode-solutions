// Problem: Minimum Element After Replacement With Digit Sum
// Link to the problem: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/
public class Solution
{
    int sumofDigits(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    public int MinElement(int[] nums)
    {
        for (int i = 0; i < nums.Length; i++)
        {
            nums[i] = sumofDigits(nums[i]);
        }
        return nums.Min();
    }
}