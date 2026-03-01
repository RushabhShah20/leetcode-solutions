// Problem: Partitioning Into Minimum Number Of Deci-Binary Numbers
// Link to the problem: https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
public class Solution
{
    public int MinPartitions(string n)
    {
        int ans = 0;
        foreach (char c in n)
        {
            ans = Math.Max(ans, c - '0');
        }
        return ans;
    }
}