// Problem: Minimum Positive Sum Subarray
// Link to the problem: https://leetcode.com/problems/minimum-positive-sum-subarray/
function minimumSumSubarray(nums: number[], l: number, r: number): number {
    const n: number = nums.length;
    let z: number = 100001;
    for (let i = 0; i < n; i++) {
        let x: number = 0;
        for (let j = i; j < n; j++) {
            x += nums[j];
            const y: number = j - i + 1;
            if (x > 0 && y >= l && y <= r) {
                z = Math.min(z, x);
            }
        }
    }
    const ans: number = z == 100001 ? -1 : z;
    return ans;
};