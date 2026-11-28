// Problem: Maximum Number of Items From Sale II
// Link to the problem: https://leetcode.com/problems/maximum-number-of-items-from-sale-ii/
function maximumSaleItems(items: number[][], budget: number): number {
    const n: number = items.length;
    items.sort((p: number[], q: number[]): number => p[1] - q[1]);
    let mx: number = 0;
    for (let i: number = 0; i < n; i++) {
        mx = Math.max(mx, items[i][0]);
    }
    const a: number[] = new Array<number>(mx + 1).fill(0);
    for (let i: number = 0; i < n; i++) {
        a[items[i][0]]++;
    }
    for (let i: number = 1; i <= mx; i++) {
        if (a[i] > 0) {
            for (let j: number = i << 1; j <= mx; j += i) {
                a[i] += a[j];
            }
        }
    }
    const mn: number = items[0][1];
    let ans: number = 0;
    for (let i: number = 0; i < n; i++) {
        const x: number = items[i][0];
        const y: number = items[i][1];
        if (y - mn > mn) {
            break;
        }
        const b: number = a[x] - 1;
        const c: number = Math.min(b, Math.floor(budget / y));
        ans += c << 1;
        budget -= c * y;
    }
    ans += Math.floor(budget / mn);
    return ans;
};