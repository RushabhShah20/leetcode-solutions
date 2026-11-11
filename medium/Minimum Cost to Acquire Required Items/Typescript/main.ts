// Problem: Minimum Cost to Acquire Required Items
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-acquire-required-items/
function minimumCost(cost1: number, cost2: number, costBoth: number, need1: number, need2: number): number {
    let ans: number = ((need1) * (cost1) + (need2) * (cost2)), minNeed: number = Math.min(need1, need2), maxNeed: number = Math.max(need1, need2);
    ans = Math.min(ans, (minNeed) * (costBoth) + (need1 - minNeed) * (cost1) + (need2 - minNeed) * (cost2));
    ans = Math.min(ans, (maxNeed) * (costBoth));
    return ans;
};