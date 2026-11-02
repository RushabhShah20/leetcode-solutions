// Problem: Minimum Moves to Equal Array Elements II
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
function minMoves2(nums: number[]): number {
    const n: number = nums.length;
    let ans: number = 0, l: number = 0, r: number = n - 1;
    nums.sort((a, b) => a - b);
    while (l <= r) {
        ans += nums[r] - nums[l];
        l++;
        r--;
    }
    return ans;
};