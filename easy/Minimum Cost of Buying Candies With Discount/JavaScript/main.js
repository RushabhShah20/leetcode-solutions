// Problem: Minimum Cost of Buying Candies With Discount
// Link to the problem: https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/
/**
 * @param {number[]} cost
 * @return {number}
 */
var minimumCost = function (cost) {
    const n = cost.length;
    let ans = 0;
    cost.sort((a, b) => a - b);
    for (let i = n - 1; i >= 0; i -= 3) {
        if (i - 1 >= 0) {
            ans += cost[i] + cost[i - 1];
        }
        else {
            ans += cost[i];
        }
    }
    return ans;
};