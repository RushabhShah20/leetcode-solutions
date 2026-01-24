// Problem: Minimize Maximum Pair Sum in Array
// Link to the problem: https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/
function minPairSum(nums: number[]): number {
    const n: number = nums.length;
    nums.sort((a, b) => a - b);
    let l: number = 0, r: number = n - 1, ans: number = 0;
    while (l < r) {
        ans = Math.max(ans, nums[l] + nums[r]);
        l++;
        r--;
    }
    return ans;
};