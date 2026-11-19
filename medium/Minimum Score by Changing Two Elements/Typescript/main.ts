// Problem: Minimum Score by Changing Two Elements
// Link to the problem: https://leetcode.com/problems/minimum-score-by-changing-two-elements/
function minimizeSum(nums: number[]): number {
    const n: number = nums.length;
    let mn1: number = 1000000001, mn2: number = 1000000001, mn3: number = 1000000001, mx1: number = 0, mx2: number = 0, mx3: number = 0;
    for (let i = 0; i < n; i++) {
        if (mn1 > nums[i]) {
            mn3 = mn2;
            mn2 = mn1;
            mn1 = nums[i];
        }
        else if (mn2 > nums[i]) {
            mn3 = mn2;
            mn2 = nums[i];
        }
        else if (mn3 > nums[i]) {
            mn3 = nums[i];
        }
        if (mx1 < nums[i]) {
            mx3 = mx2;
            mx2 = mx1;
            mx1 = nums[i];
        }
        else if (mx2 < nums[i]) {
            mx3 = mx2;
            mx2 = nums[i];
        }
        else if (mx3 < nums[i]) {
            mx3 = nums[i];
        }
    }
    const a: number = mx3 - mn1, b: number = mx1 - mn3, c: number = mx2 - mn2;
    const ans: number = Math.min(a, Math.min(b, c));
    return ans;
};