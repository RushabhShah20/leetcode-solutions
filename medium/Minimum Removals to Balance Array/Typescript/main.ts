// Problem: Minimum Removals to Balance Array
// Link to the problem: https://leetcode.com/problems/minimum-removals-to-balance-array/
function minRemoval(nums: number[], k: number): number {
    const n: number = nums.length;
    let i: number = 0, ans: number = 0;
    nums.sort((a, b) => a - b);
    for (let j = 0; j < n; j++) {
        while (nums[j] > nums[i] * k) {
            i++;
        }
        ans = Math.max(ans, j - i + 1);
    }
    ans = n - ans;
    return ans;
};