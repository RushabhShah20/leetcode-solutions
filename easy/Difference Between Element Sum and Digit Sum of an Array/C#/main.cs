// Problem: Difference Between Element Sum and Digit Sum of an Array
// Link to the problem: https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/
public class Solution
{
    public int DifferenceOfSum(int[] nums)
    {
        int ele_sum = 0, dig_sum = 0;
        for (int i = 0; i < nums.Length; i++)
        {
            ele_sum += nums[i];
            while (nums[i] > 0)
            {
                dig_sum += (nums[i] % 10);
                nums[i] /= 10;
            }
        }
        if (ele_sum > dig_sum)
        {
            return ele_sum - dig_sum;
        }
        else
        {
            return dig_sum - ele_sum;
        }
    }
}