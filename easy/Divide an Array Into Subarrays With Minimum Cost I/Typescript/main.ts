// Problem: Divide an Array Into Subarrays With Minimum Cost I
// Link to the problem: https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-i/
function minimumCost(nums: number[]): number {
    const n: number = nums.length;
    let m1: number = 51, m2: number = 51;
    for (let i = 1; i < n; i++) {
        if (nums[i] < m1) {
            m2 = m1;
            m1 = nums[i];
        }
        else if (nums[i] < m2) {
            m2 = nums[i];
        }
    }
    const ans: number = nums[0] + m1 + m2;
    return ans;
};