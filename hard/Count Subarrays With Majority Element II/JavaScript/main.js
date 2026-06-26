// Problem: Count Subarrays With Majority Element II
// Link to the problem: https://leetcode.com/problems/count-subarrays-with-majority-element-ii/
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var countMajoritySubarrays = function (nums, target) {
    const n = nums.length;
    let pre = new Array(2 * n + 1).fill(0);
    pre[n] = 1;
    let x = n, ans = 0, y = 0;
    for (let i = 0; i < n; i++) {
        if (nums[i] === target) {
            y += pre[x];
            x++;
            pre[x]++;
        }
        else {
            x--;
            y -= pre[x];
            pre[x]++;
        }
        ans += y;
    }
    return ans;
};