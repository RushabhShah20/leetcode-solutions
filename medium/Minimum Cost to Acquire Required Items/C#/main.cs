// Problem: Minimum Cost to Acquire Required Items
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-acquire-required-items/
public class Solution
{
    public long MinimumCost(int cost1, int cost2, int costBoth, int need1, int need2)
    {
        long ans = ((long)(need1) * (long)(cost1) + (long)(need2) * (long)(cost2)),
                minNeed = Math.Min(need1, need2), maxNeed = Math.Max(need1, need2);
        ans = Math.Min(ans, (long)(minNeed) * (long)(costBoth) + (long)(need1 - minNeed) * (long)(cost1)
                + (long)(need2 - minNeed) * (long)(cost2));
        ans = Math.Min(ans, (long)(maxNeed) * (long)(costBoth));
        return ans;
    }
}