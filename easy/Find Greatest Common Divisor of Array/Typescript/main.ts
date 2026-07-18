// Problem: Find Greatest Common Divisor of Array
// Link to the problem: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
function gcd(a: number, b: number): number {
    return b === 0 ? a : gcd(b, a % b);
}
function findGCD(nums: number[]): number {
    const n = nums.length;
    let mx = 0, mn = 1001;
    for (let i = 0; i < n; i++) {
        mx = Math.max(mx, nums[i]);
        mn = Math.min(mn, nums[i]);
    }
    const ans = gcd(mx, mn);
    return ans;
};