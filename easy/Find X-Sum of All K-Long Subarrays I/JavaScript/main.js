// Problem: Find X-Sum of All K-Long Subarrays I
// Link to the problem: https://leetcode.com/problems/find-x-sum-of-all-k-long-subarrays-i/
/**
 * @param {number[]} nums
 * @param {number} k
 * @param {number} x
 * @return {number[]}
 */
var findXSum = function (nums, k, x) {
    const n = nums.length;
    const ans = [];
    const m = new Map();
    for (let i = 0; i < n; i++) {
        if (i >= k) {
            m.set(nums[i], (m.get(nums[i]) || 0) + 1);
            m.set(nums[i - k], m.get(nums[i - k]) - 1);
            if (m.get(nums[i - k]) === 0) {
                m.delete(nums[i - k]);
            }
        } else {
            m.set(nums[i], (m.get(nums[i]) || 0) + 1);
        }
        if (i >= k - 1) {
            const v = Array.from(m.entries());
            v.sort((a, b) => {
                if (a[1] === b[1]) {
                    return b[0] - a[0];
                } else {
                    return b[1] - a[1];
                }
            });
            let sum = 0;
            for (let j = 0; j < Math.min(x, v.length); j++) {
                sum += v[j][0] * v[j][1];
            }
            ans.push(sum);
        }
    }
    return ans;
};