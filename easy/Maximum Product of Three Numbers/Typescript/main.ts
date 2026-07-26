// Problem: Maximum Product of Three Numbers
// Link to the problem: https://leetcode.com/problems/maximum-product-of-three-numbers/
function maximumProduct(nums: number[]): number {
    const n: number = nums.length;
    let a: number = -1001, b: number = -1001, c: number = -1001, x: number = 1001, y: number = 1001;
    for (let i = 0; i < n; i++) {
        if (nums[i] < x) {
            y = x;
            x = nums[i];
        }
        else if (nums[i] < y) {
            y = nums[i];
        }
        if (nums[i] > a) {
            c = b;
            b = a;
            a = nums[i];
        }
        else if (nums[i] > b) {
            c = b;
            b = nums[i];
        }
        else if (nums[i] > c) {
            c = nums[i];
        }
    }
    const ans: number = Math.max(a * b * c, a * x * y);
    return ans;
};