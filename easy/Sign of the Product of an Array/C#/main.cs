// Problem: Sign of the Product of an Array
// Link to the problem: https://leetcode.com/problems/sign-of-the-product-of-an-array/
public class Solution
{
    public int ArraySign(int[] nums)
    {
        int sign = 1;
        for (int i = 0; i < nums.Length; i++)
        {
            if (nums[i] == 0)
                return 0;
            else if (nums[i] < 0)
                sign *= -1;
        }
        return sign;
    }
}