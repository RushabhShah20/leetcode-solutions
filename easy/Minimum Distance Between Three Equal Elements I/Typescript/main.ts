// Problem: Minimum Distance Between Three Equal Elements I
// Link to the problem: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/
function minimumDistance(nums: number[]): number {
    let n: number = nums.length;
    let ans: number = Number.MAX_SAFE_INTEGER;
    for (let i = 0; i < n; i++) {
        for (let j = 0; j < n; j++) {
            for (let k = 0; k < n; k++) {
                if (i !== j && j !== k && i !== k) {
                    if (nums[i] === nums[j] && nums[j] === nums[k]) {
                        ans = Math.min(ans, Math.abs(i - j) + Math.abs(j - k) + Math.abs(k - i));
                    }
                }
            }
        }
    }
    return ((ans === Number.MAX_SAFE_INTEGER) ? (-1) : (ans));
};