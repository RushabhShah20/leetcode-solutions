// Problem: Count Good Triplets
// Link to the problem: https://leetcode.com/problems/count-good-triplets/
function countGoodTriplets(arr: number[], a: number, b: number, c: number): number {
    const n: number = arr.length;
    let ans: number = 0;
    for (let i = 0; i < n - 2; i++) {
        for (let j = i + 1; j < n - 1; j++) {
            for (let k = j + 1; k < n; k++) {
                if (Math.abs(arr[i] - arr[j]) > a) {
                    continue;
                }
                if (Math.abs(arr[j] - arr[k]) > b) {
                    continue;
                }
                if (Math.abs(arr[i] - arr[k]) > c) {
                    continue;
                }
                ans++;
            }
        }
    }
    return ans;
};