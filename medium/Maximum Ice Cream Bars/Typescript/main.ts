// Problem: Maximum Ice Cream Bars
// Link to the problem: https://leetcode.com/problems/maximum-ice-cream-bars
function maxIceCream(costs: number[], coins: number): number {
    let n: number = costs.length;
    let mx: number = 0;
    for (let i = 0; i < n; i++) {
        mx = Math.max(mx, costs[i]);
    }
    let a: number[] = new Array(mx + 1).fill(0);
    for (let i = 0; i < n; i++) {
        a[costs[i]]++;
    }
    let ans: number = 0;
    for (let i = 1; i <= mx; i++) {
        if (a[i] === 0) {
            continue;
        }
        if (coins < i) {
            break;
        }
        const x: number = Math.min(a[i], Math.floor(coins / i));
        coins -= i * x;
        ans += x;
    }
    return ans;
};