// Problem: Apply Operations on Array to Maximize Sum of Squares
// Link to the problem: https://leetcode.com/problems/apply-operations-on-array-to-maximize-sum-of-squares/
function maxSum(nums: number[], k: number): number {
    const n: number = nums.length, m: number = 1000000007;
    let a: number[] = new Array(30).fill(0);
    for (let i = 0; i < n; i++) {
        for (let j = 0; j < 30; j++) {
            a[j] += nums[i] >> j & 1;
        }
    }
    let ans: number = 0;
    for (let i = 0; i < k; i++) {
        let x = 0;
        for (let j = 29; j >= 0; j--) {
            if (a[j] > 0) {
                x |= 1 << j;
                a[j]--;
            }
        }
        ans = Number((BigInt(ans) + BigInt(x) * BigInt(x)) % BigInt(m));
    }
    return ans;
};