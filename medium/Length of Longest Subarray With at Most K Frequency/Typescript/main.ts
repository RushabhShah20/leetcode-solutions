// Problem: Length of Longest Subarray With at Most K Frequency
// Link to the problem: https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/
function maxSubarrayLength(nums: number[], k: number): number {
    const n: number = nums.length;
    let i: number = 0, j: number = 0, ans: number = 0;
    let m: Map<any, any> = new Map<any, any>();
    while (j < n) {
        m.set(nums[j], (m.get(nums[j]) || 0) + 1);
        while (m.get(nums[j]) > k && i < n) {
            m.set(nums[i], m.get(nums[i]) - 1);
            i++;
        }
        ans = Math.max(ans, j - i + 1);
        j++;
    }
    return ans;
};