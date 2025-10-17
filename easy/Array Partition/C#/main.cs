// Problem: Array Partition
// Link to the problem: https://leetcode.com/problems/array-partition/
public class Solution
{
    public int ArrayPairSum(int[] nums)
    {
        int ans = 0;
        Array.Sort(nums);
        for (int i = 0; i < nums.Length; i += 2)
        {
            ans += nums[i];
        }
        return ans;
    }
}