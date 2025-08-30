// Problem: Product of Array Except Self
// Link to the problem: https://leetcode.com/problems/product-of-array-except-self/
function productExceptSelf(nums: number[]): number[] {
    let prefix: number[] = new Array(nums.length, 1);
    let suffix: number[] = new Array(nums.length, 1);
    let ans: number[] = new Array(nums.length, 1);
    prefix[0] = 1;
    for (let i = 1; i < nums.length; i++) {
        if (prefix[i - 1] === 0) {
            prefix[i] = 0;
        }
        else {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }
    }
    suffix[nums.length - 1] = 1;
    for (let i = nums.length - 2; i >= 0; i--) {
        if (suffix[i + 1] === 0) {
            suffix[i] = 0;
        }
        else {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }
    }
    for (let i = 0; i < nums.length; i++) {
        ans[i] = prefix[i] * suffix[i];
    }
    return ans;
};