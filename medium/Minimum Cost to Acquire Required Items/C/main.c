// Problem: Minimum Cost to Acquire Required Items
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-acquire-required-items/
long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2)
{
    long long ans = ((long long)(need1) * (long long)(cost1) + (long long)(need2) * (long long)(cost2)), minNeed = fmin(need1, need2), maxNeed = fmax(need1, need2);
    ans = fmin(ans, (long long)(minNeed) * (long long)(costBoth) + (long long)(need1 - minNeed) * (long long)(cost1) + (long long)(need2 - minNeed) * (long long)(cost2));
    ans = fmin(ans, (long long)(maxNeed) * (long long)(costBoth));
    return ans;
}