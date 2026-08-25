// Problem: Smallest Missing Multiple of K
// Link to the problem: https://leetcode.com/problems/smallest-missing-multiple-of-k/
function missingMultiple(nums: number[], k: number): number {
    const n: number = nums.length;
    let s: Set<any> = new Set();
    for (let i = 0; i < n; i++) {
        s.add(nums[i]);
    }
    let ans: number = k;
    while (s.has(ans)) {
        ans += k;
    }
    return ans;
};