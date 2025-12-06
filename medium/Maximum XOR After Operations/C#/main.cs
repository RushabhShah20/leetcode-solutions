// Problem: Maximum XOR After Operations
// Link to the problem: https://leetcode.com/problems/maximum-xor-after-operations/
public class Solution
{
    public int MaximumXOR(int[] nums)
    {
        int ans = 0;
        foreach (int num in nums)
        {
            ans |= num;
        }
        return ans;
    }
}