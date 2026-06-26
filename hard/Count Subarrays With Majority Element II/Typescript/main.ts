// Problem: Count Subarrays With Majority Element II
// Link to the problem: https://leetcode.com/problems/count-subarrays-with-majority-element-ii/
function countMajoritySubarrays(nums: number[], target: number): number {
    const n: number = nums.length;
    let pre: number[] = new Array(2 * n + 1).fill(0);
    pre[n] = 1;
    let x: number = n, ans: number = 0, y: number = 0;
    for (let i = 0; i < n; i++) {
        if (nums[i] === target) {
            y += pre[x];
            x++;
            pre[x]++;
        }
        else {
            x--;
            y -= pre[x];
            pre[x]++;
        }
        ans += y;
    }
    return ans;
};