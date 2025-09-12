// Problem: Sort Colors
// Link to the problem: https://leetcode.com/problems/sort-colors/
public class Solution
{
    public void SortColors(int[] nums)
    {
        int zeroes = 0, ones = 0, twos = 0;
        for (int i = 0; i < nums.Length; i++)
        {
            if (nums[i] == 0)
            {
                zeroes++;
            }
            else if (nums[i] == 1)
            {
                ones++;
            }
            else
            {
                twos++;
            }
        }
        for (int i = 0; i < nums.Length; i++)
        {
            if (zeroes > 0)
            {
                nums[i] = 0;
                zeroes--;
            }
            else if (ones > 0)
            {
                nums[i] = 1;
                ones--;
            }
            else
            {
                nums[i] = 2;
                twos--;
            }
        }
    }
}