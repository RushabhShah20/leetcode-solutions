// Problem: Maximum Number of Items From Sale II
// Link to the problem: https://leetcode.com/problems/maximum-number-of-items-from-sale-ii/
/**
 * @param {number[][]} items
 * @param {number} budget
 * @return {number}
 */
var maximumSaleItems = function (items, budget) {
    const n = items.length;
    items.sort((p, q) => p[1] - q[1]);
    let mx = 0;
    for (let i = 0; i < n; i++) {
        mx = Math.max(mx, items[i][0]);
    }
    const a = new Array(mx + 1).fill(0);
    for (let i = 0; i < n; i++) {
        a[items[i][0]]++;
    }
    for (let i = 1; i <= mx; i++) {
        if (a[i] > 0) {
            for (let j = i << 1; j <= mx; j += i) {
                a[i] += a[j];
            }
        }
    }
    const mn = items[0][1];
    let ans = 0;
    for (let i = 0; i < n; i++) {
        const x = items[i][0];
        const y = items[i][1];
        if (y - mn > mn) {
            break;
        }
        const b = a[x] - 1;
        const c = Math.min(b, Math.floor(budget / y));
        ans += c << 1;
        budget -= c * y;
    }
    ans += Math.floor(budget / mn);
    return ans;
};