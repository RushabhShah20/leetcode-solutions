// Problem: Maximum Ice Cream Bars
// Link to the problem: https://leetcode.com/problems/maximum-ice-cream-bars
/**
 * @param {number[]} costs
 * @param {number} coins
 * @return {number}
 */
var maxIceCream = function (costs, coins) {
    let n = costs.length;
    let mx = 0;
    for (let i = 0; i < n; i++) {
        mx = Math.max(mx, costs[i]);
    }
    let a = new Array(mx + 1).fill(0);
    for (let i = 0; i < n; i++) {
        a[costs[i]]++;
    }
    let ans = 0;
    for (let i = 1; i <= mx; i++) {
        if (a[i] === 0) {
            continue;
        }
        if (coins < i) {
            break;
        }
        const x = Math.min(a[i], Math.floor(coins / i));
        coins -= i * x;
        ans += x;
    }
    return ans;
};