// Problem: How Many Numbers Are Smaller Than the Current Number
// Link to the problem: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
public class Solution
{
    public int[] SmallerNumbersThanCurrent(int[] nums)
    {
        int n = nums.Length;
        int[] freq = new int[101];
        foreach (int num in nums)
        {
            freq[num]++;
        }
        for (int i = 1; i < 101; i++)
        {
            freq[i] += freq[i - 1];
        }
        int[] ans = new int[n];
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                ans[i] = 0;
            }
            else
            {
                ans[i] = freq[nums[i] - 1];
            }
        }
        return ans;
    }
}