// Problem: Sign of the Product of an Array
// Link to the problem: https://leetcode.com/problems/sign-of-the-product-of-an-array/
function arraySign(nums: number[]): number {
    let sign: number = 1;
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] === 0) return 0;
        else if (nums[i] < 0) sign *= -1;
    }
    return sign;
};