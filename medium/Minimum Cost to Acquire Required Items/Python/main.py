# Problem: Minimum Cost to Acquire Required Items
# Link to the problem: https://leetcode.com/problems/minimum-cost-to-acquire-required-items/
class Solution:
    def minimumCost(
        self, cost1: int, cost2: int, costBoth: int, need1: int, need2: int
    ) -> int:
        ans: int = need1 * cost1 + need2 * cost2
        minNeed: int = min(need1, need2)
        maxNeed: int = max(need1, need2)
        ans = min(
            ans,
            (minNeed) * (costBoth)
            + (need1 - minNeed) * (cost1)
            + (need2 - minNeed) * (cost2),
        )
        ans = min(ans, (maxNeed) * (costBoth))
        return ans
