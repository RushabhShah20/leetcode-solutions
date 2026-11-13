// Problem: Count Non-Decreasing Subarrays After K Operations
// Link to the problem: https://leetcode.com/problems/count-non-decreasing-subarrays-after-k-operations/
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var countNonDecreasingSubarrays = function (nums, k) {
    const n = nums.length;
    let ans = 0, x = 0;
    let st = new Array(n).fill(0);
    let a = 0, b = 0, j = n - 1;
    for (let i = n - 1; i >= 0; i--) {
        while (a < b && nums[st[b - 1]] < nums[i]) {
            b--;
            const y = st[b], r = (a < b) ? st[b - 1] : j + 1;
            x += (r - y) * (nums[i] - nums[y]);
        }
        st[b] = i;
        b++;
        while (x > k) {
            x -= nums[st[a]] - nums[j];
            if (st[a] === j) {
                a++;
            }
            j--;
        }
        ans += j - i + 1;
    }
    return ans;
};