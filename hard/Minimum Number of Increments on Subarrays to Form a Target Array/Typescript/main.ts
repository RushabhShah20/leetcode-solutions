// Problem: Minimum Number of Increments on Subarrays to Form a Target Array
// Link to the problem: https://leetcode.com/problems/minimum-number-of-increments-on-subarrays-to-form-a-target-array/
function minNumberOperations(target: number[]): number {
    let n: number = target.length, ans: number = target[0];
    for (let i = 1; i < n; i++) {
        if (target[i] > target[i - 1]) {
            ans += (target[i] - target[i - 1]);
        }
    }
    return ans;
};