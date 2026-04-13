// Problem: Minimum Distance to the Target Element
// Link to the problem: https://leetcode.com/problems/minimum-distance-to-the-target-element/
function getMinDistance(nums: number[], target: number, start: number): number {
    const n: number = nums.length;
    let ans: number = 1000000000;
    for (let i = 0; i < n; i++) {
        if (nums[i] === target) {
            ans = Math.min(Math.abs(i - start), ans);
        }
    }
    return ans;
};