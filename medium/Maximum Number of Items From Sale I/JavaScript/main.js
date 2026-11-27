// Problem: Maximum Number of Items From Sale I
// Link to the problem: https://leetcode.com/problems/maximum-number-of-items-from-sale-i/
/**
 * @param {number[][]} items
 * @param {number} budget
 * @return {number}
 */
var maximumSaleItems = function (items, budget) {
    const n = items.length;
    let a = new Array(budget + 1).fill(0);
    let x = 1000000000;
    for (let i = 0; i < n; i++) {
        const y = items[i][0], z = items[i][1];
        x = Math.min(x, z);
        let b = 0;
        for (let j = 0; j < n; j++) {
            if (items[j][0] % y === 0) {
                b++;
            }
        }
        for (let j = budget; j >= z; j--) {
            a[j] = Math.max(a[j], a[j - z] + b);
        }
    }
    let ans = 0;
    for (let i = 0; i <= budget; i++) {
        ans = Math.max(ans, a[i] + Math.floor((budget - i) / x));
    }
    return ans;
};