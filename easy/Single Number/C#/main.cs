// Problem: Single Number
// Link to the problem: https://leetcode.com/problems/single-number/
public class Solution
{
    public int SingleNumber(int[] nums)
    {
        int ans = 0;
        foreach (int num in nums)
        {
            ans ^= num;
        }
        return ans;
    }
}