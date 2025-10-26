// Problem: Build Array from Permutation
// Link to the problem: https://leetcode.com/problems/build-array-from-permutation/
public class Solution
{
    public int[] BuildArray(int[] nums)
    {
        int[] ans = new int[nums.Length];
        ans[0] = nums[nums[0]];
        for (int i = 1; i < nums.Length; i++)
        {
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
}