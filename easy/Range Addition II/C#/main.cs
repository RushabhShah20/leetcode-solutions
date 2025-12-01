// Problem: Range Addition II
// Link to the problem: https://leetcode.com/problems/range-addition-ii/
public class Solution
{
    public int MaxCount(int m, int n, int[][] ops)
    {
        foreach (int[] op in ops)
        {
            m = Math.Min(m, op[0]);
            n = Math.Min(n, op[1]);
        }
        int ans = m * n;
        return ans;
    }
}