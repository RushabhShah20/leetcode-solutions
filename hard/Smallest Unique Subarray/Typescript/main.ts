// Problem: Smallest Unique Subarray
// Link to the problem: https://leetcode.com/problems/smallest-unique-subarray/
function check(a: number[], k: number): boolean {
    const n: number = a.length;
    const m: Map<bigint, number> = new Map<bigint, number>();
    const p1: number = 31, p2: number = 37, m1: number = 1000000007, m2: number = 1000000009;
    const bigM2: bigint = BigInt(m2);
    let e1: number = 1;
    let e2: number = 1;
    let h1: number = 0;
    let h2: number = 0;
    for (let i = 0; i < k; i++) {
        h1 = (h1 * p1 % m1 + a[i]) % m1;
        h2 = (h2 * p2 % m2 + a[i]) % m2;
    }
    for (let i = 1; i < k; i++) {
        e1 = e1 * p1 % m1;
        e2 = e2 * p2 % m2;
    }
    let key: bigint = BigInt(h1) * bigM2 + BigInt(h2);
    m.set(key, 1);
    for (let i = k; i < n; i++) {
        const x1: number = a[i - k] * e1 % m1;
        h1 = (h1 - x1 + m1) % m1;
        h1 = (h1 * p1 % m1 + a[i]) % m1;
        const x2: number = a[i - k] * e2 % m2;
        h2 = (h2 - x2 + m2) % m2;
        h2 = (h2 * p2 % m2 + a[i]) % m2;
        key = BigInt(h1) * bigM2 + BigInt(h2);
        m.set(key, (m.get(key) ?? 0) + 1);
    }
    let count: number;
    for (count of m.values()) {
        if (count === 1) {
            return false;
        }
    }
    return true;
}

function smallestUniqueSubarray(nums: number[]): number {
    const n: number = nums.length;
    let ans: number = n, l: number = 1, r: number = n;
    while (l <= r) {
        const m: number = l + Math.floor((r - l) / 2);
        if (check(nums, m)) {
            l = m + 1;
        } else {
            ans = m;
            r = m - 1;
        }
    }
    return ans;
}