// Problem: Squares of a Sorted Array
// Link to the problem: https://leetcode.com/problems/squares-of-a-sorted-array/
function sortedSquares(nums: number[]): number[] {
    const n: number = nums.length;
    let ans: number[] = new Array(n);
    let l: number = 0, r: number = n - 1, i: number = n - 1;
    while (l <= r) {
        const x: number = nums[l] * nums[l], y: number = nums[r] * nums[r];
        if (x > y) {
            ans[i] = x;
            l++;
        }
        else {
            ans[i] = y;
            r--;
        }
        i--;
    }
    return ans;
};