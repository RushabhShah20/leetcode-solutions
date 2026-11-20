// Problem: Maximize Consecutive Elements in an Array After Modification
// Link to the problem: https://leetcode.com/problems/maximize-consecutive-elements-in-an-array-after-modification/
function maxSelectedElements(nums: number[]): number {
    const n: number = nums.length;
    nums.sort((a, b) => a - b);
    let a: number[] = new Array(1000001).fill(0);
    let ans = 0;
    for (let i = 0; i < n; i++) {
        const x: number = nums[i];
        a[x + 1] = Math.max(a[x + 1], a[x] + 1);
        a[x] = Math.max(a[x], a[x - 1] + 1);
        ans = Math.max(ans, Math.max(a[x], a[x + 1]));
    }
    return ans;
};