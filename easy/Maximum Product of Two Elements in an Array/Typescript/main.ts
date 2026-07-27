// Problem: Maximum Product of Two Elements in an Array
// Link to the problem: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
function maxProduct(nums: number[]): number {
    const n: number = nums.length;
    let x: number = 0, y: number = 0;
    for (let i = 0; i < n; i++) {
        if (nums[i] > x) {
            y = x;
            x = nums[i];
        }
        else if (nums[i] > y) {
            y = nums[i];
        }
    }
    const ans: number = (x - 1) * (y - 1);
    return ans;
};