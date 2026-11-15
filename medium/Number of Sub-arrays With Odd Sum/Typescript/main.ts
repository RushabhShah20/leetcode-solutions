// Problem: Number of Sub-arrays With Odd Sum
// Link to the problem: https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/
function numOfSubarrays(arr: number[]): number {
    const n: number = arr.length;
    let ans: number = 0, x: number = 0, y: number = 1, z: number = 0;
    for (let i = 0; i < n; i++) {
        const m: number = 1000000007;
        z += arr[i];
        if (z & 1) {
            ans = (ans + y) % m;
            x++;
        }
        else {
            ans = (ans + x) % m;
            y++;
        }
    }
    return ans;
};