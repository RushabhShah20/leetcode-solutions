// Problem: Bitwise OR of Even Numbers in an Array
// Link to the problem: https://leetcode.com/problems/bitwise-or-of-even-numbers-in-an-array/
public class Solution
{
    public int EvenNumberBitwiseORs(int[] nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.Length; i++)
        {
            if (nums[i] % 2 == 0)
            {
                ans |= nums[i];
            }
        }
        return ans;
    }
}