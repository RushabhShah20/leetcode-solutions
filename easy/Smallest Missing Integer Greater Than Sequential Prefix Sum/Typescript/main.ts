// Problem: Smallest Missing Integer Greater Than Sequential Prefix Sum
// Link to the problem: https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/
function missingInteger(nums: number[]): number {
    const n: number = nums.length;
    const s: Set<number> = new Set(nums);
    let m: number = 1;
    for (let i = 1; i < n; i++) {
        if (nums[i] === nums[i - 1] + 1) {
            m += 1;
        } else {
            break;
        }
    }
    let ans: number = ((nums[m - 1] + nums[0]) * m) / 2;
    while (s.has(ans)) {
        ans += 1;
    }
    return ans;
};