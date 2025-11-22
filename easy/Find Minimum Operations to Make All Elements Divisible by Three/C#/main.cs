// Problem: Find Minimum Operations to Make All Elements Divisible by Three
// Link to the problem: https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/
public class Solution
{
    public int MinimumOperations(int[] nums)
    {
        int ans = 0;
        foreach (int num in nums)
        {
            ans += ((num % 3 != 0) ? (1) : (0));
        }
        return ans;
    }
}