// Problem: Maximum Subarray With Equal Products
// Link to the problem: https://leetcode.com/problems/maximum-subarray-with-equal-products/
function gcd(a: number, b: number): number {
    return b === 0 ? a : gcd(b, a % b);
}
function maxLength(nums: number[]): number {
    const n: number = nums.length;
    let ans: number = 2, x: number = 1, i: number = 0;
    for (let j = 0; j < n; j++) {
        while (gcd(x, nums[j]) > 1) {
            x /= nums[i];
            i++;
        }
        x *= nums[j];
        ans = Math.max(ans, j - i + 1);
    }
    return ans;
};