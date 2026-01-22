// Problem: Maximum Product of Two Elements in an Array
// Link to the problem: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
function maxProduct(nums: number[]): number {
    let x: number = 0, y: number = 0;
    for (const num of nums) {
        if (num > x) {
            y = x;
            x = num;
        }
        else if (num > y) {
            y = num;
        }
    }
    const ans: number = (x - 1) * (y - 1);
    return ans;
};