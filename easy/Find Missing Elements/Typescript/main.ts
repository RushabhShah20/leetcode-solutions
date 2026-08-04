// Problem: Find Missing Elements
// Link to the problem: https://leetcode.com/problems/find-missing-elements/
function findMissingElements(nums: number[]): number[] {
    const n: number = nums.length;
    let mn: number = 101;
    let mx: number = 1;
    for (let i = 0; i < n; i++) {
        mn = Math.min(mn, nums[i]);
        mx = Math.max(mx, nums[i]);
    }
    const m: number = mx - mn + 1;
    let a: number[] = new Array(m).fill(0);
    for (let i = 0; i < n; i++) {
        a[nums[i] - mn]++;
    }
    let ans: number[] = new Array();
    for (let i = 0; i < m; i++) {
        if (a[i] === 0) {
            ans.push(i + mn);
        }
    }
    return ans;
};