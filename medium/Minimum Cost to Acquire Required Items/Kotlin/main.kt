// Problem: Minimum Cost to Acquire Required Items
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-acquire-required-items/
class Solution {
    fun minimumCost(cost1: Int, cost2: Int, costBoth: Int, need1: Int, need2: Int): Long {
        var ans: Long = ((need1).toLong() * (cost1).toLong() + (need2).toLong() * (cost2).toLong())
        val minNeed: Long = minOf(need1, need2).toLong()
        val maxNeed: Long = maxOf(need1, need2).toLong()
        ans = minOf(
            ans,
            (minNeed) * (costBoth).toLong() + ((need1).toLong() - minNeed) * (cost1).toLong() + ((need2).toLong() - minNeed) * (
                    cost2
                    ).toLong()
        );
        ans = minOf(ans, (maxNeed) * (costBoth).toLong());
        return ans;
    }
}