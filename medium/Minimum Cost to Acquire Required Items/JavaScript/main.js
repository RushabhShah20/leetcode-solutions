// Problem: Minimum Cost to Acquire Required Items
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-acquire-required-items/
/**
 * @param {number} cost1
 * @param {number} cost2
 * @param {number} costBoth
 * @param {number} need1
 * @param {number} need2
 * @return {number}
 */
var minimumCost = function (cost1, cost2, costBoth, need1, need2) {
    let ans = ((need1) * (cost1) + (need2) * (cost2)), minNeed = Math.min(need1, need2), maxNeed = Math.max(need1, need2);
    ans = Math.min(ans, (minNeed) * (costBoth) + (need1 - minNeed) * (cost1) + (need2 - minNeed) * (cost2));
    ans = Math.min(ans, (maxNeed) * (costBoth));
    return ans;
};