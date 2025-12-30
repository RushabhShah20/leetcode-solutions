// Problem: Removing Minimum and Maximum From Array
// Link to the problem: https://leetcode.com/problems/removing-minimum-and-maximum-from-array/
function minimumDeletions(nums: number[]): number {
    const n: number = nums.length;
    let x: number = 0, y: number = 0;
    for (let i = 0; i < n; i++) {
        if (nums[i] > nums[x]) {
            x = i;
        }
        else if (nums[i] < nums[y]) {
            y = i;
        }
    }
    const a: number = Math.max(x, y) + 1;
    const b: number = n - Math.min(x, y);
    const c: number = (Math.min(x, y) + 1) + (n - Math.max(x, y));
    const ans: number = Math.min(a, b, c);
    return ans;
};