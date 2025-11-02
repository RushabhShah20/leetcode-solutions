// Problem: Maximum Product of Three Elements After One Replacement
// Link to the problem: https://leetcode.com/problems/maximum-product-of-three-elements-after-one-replacement/
function maxProduct(nums: number[]): number {
    let n: number = nums.length;
    let ans: number = 1;
    nums.sort((a, b) => a - b);
    let a: number = nums[0], b: number = nums[1], c: number = nums[n - 2], d: number = nums[n - 1], x = 100000;
    let arr: number[] = [a * b * x, a * b * -x, a * c * x, a * c * -x, a * d * x, a * d * -x, b * c * x, b * c * -x, b * d * x, b * d * -x, c * d * x, c * d * -x];
    ans = Math.max(...arr);
    return ans;
};