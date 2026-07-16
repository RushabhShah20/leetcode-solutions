// Problem: Sum of GCD of Formed Pairs
// Link to the problem: https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/
function gcd(a: number, b: number): number {
    return b == 0 ? a : gcd(b, a % b);
}
function gcdSum(nums: number[]): number {
    const n: number = nums.length;
    let mx: number = 0;
    let a: number[] = new Array(n);
    for (let i = 0; i < n; i++) {
        mx = Math.max(mx, nums[i]);
        a[i] = gcd(mx, nums[i]);
    }
    let ans: number = 0;
    a.sort((x, y) => x - y);
    let l = 0, r = n - 1;
    while (l < r) {
        ans += gcd(a[l], a[r]);
        l++;
        r--;
    }
    return ans;
};