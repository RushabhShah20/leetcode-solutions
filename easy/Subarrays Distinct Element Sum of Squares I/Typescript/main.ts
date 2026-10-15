// Problem: Subarrays Distinct Element Sum of Squares I
// Link to the problem: https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/
function sumCounts(nums: number[]): number {
    const n: number = nums.length;
    let ans: number = 0;
    for (let i = 0; i < n; i++) {
        let s: Set<number> = new Set();
        for (let j = i; j < n; j++) {
            s.add(nums[j]);
            ans += s.size * s.size;
        }
    }
    return ans;
};