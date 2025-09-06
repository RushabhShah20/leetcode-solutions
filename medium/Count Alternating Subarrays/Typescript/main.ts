// Problem: Count Alternating Subarrays
// Link to the problem: https://leetcode.com/problems/count-alternating-subarrays/
function countAlternatingSubarrays(nums: number[]): number {
    let ans: number = 0, count: number = 1;
    let a: number[] = new Array();
    for (let i = 1; i < nums.length; i++) {
        if (nums[i] !== nums[i - 1]) {
            count++;
        }
        else {
            a.push(count);
            count = 1;
        }
    }
    a.push(count);
    for (let i = 0; i < a.length; i++) {
        ans += Math.floor(((a[i]) * (a[i] + 1)) / 2);
    }
    return ans;
};