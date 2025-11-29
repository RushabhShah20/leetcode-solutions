// Problem: Minimum Operations to Make Array Sum Divisible by K
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/
public class Solution
{
    public int MinOperations(int[] nums, int k)
    {
        int sum = 0;
        foreach (int num in nums)
        {
            sum += num;
        }
        int ans = sum % k;
        return ans;
    }
}