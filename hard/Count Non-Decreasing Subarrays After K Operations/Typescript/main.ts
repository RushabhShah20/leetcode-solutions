// Problem: Count Non-Decreasing Subarrays After K Operations
// Link to the problem: https://leetcode.com/problems/count-non-decreasing-subarrays-after-k-operations/
function countNonDecreasingSubarrays(nums: number[], k: number): number {
    const n: number = nums.length;
    let ans: number = 0, x: number = 0;
    let st: number[] = new Array(n).fill(0);
    let a: number = 0, b: number = 0, j: number = n - 1;
    for (let i = n - 1; i >= 0; i--) {
        while (a < b && nums[st[b - 1]] < nums[i]) {
            b--;
            const y: number = st[b], r: number = (a < b) ? st[b - 1] : j + 1;
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