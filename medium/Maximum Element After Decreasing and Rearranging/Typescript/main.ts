// Problem: Maximum Element After Decreasing and Rearranging
// Link to the problem: https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/
function maximumElementAfterDecrementingAndRearranging(arr: number[]): number {
    arr.sort((a, b) => a - b);
    const n: number = arr.length;
    let ans: number = 1;
    for (let i = 1; i < n; i++) {
        if (arr[i] >= ans + 1) {
            ans++;
        }
    }
    return ans;
};