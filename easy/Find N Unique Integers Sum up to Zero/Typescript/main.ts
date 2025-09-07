// Problem: Find N Unique Integers Sum up to Zero
// Link to the problem: https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/
function sumZero(n: number): number[] {
    let ans: number[] = new Array(n);
    for (let i = 0; i < n; i++) {
        ans[i] = 2 * i - n + 1;
    }
    return ans;
};