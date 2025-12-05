// Problem: Count Partitions with Even Sum Difference
// Link to the problem: https://leetcode.com/problems/count-partitions-with-even-sum-difference/
public class Solution
{
    public int CountPartitions(int[] nums)
    {
        int sum = 0, ans = nums.Length - 1;
        foreach (int num in nums)
        {
            sum += num;
        }
        if (sum % 2 == 0)
        {
            return ans;
        }
        else
        {
            return 0;
        }
    }
}