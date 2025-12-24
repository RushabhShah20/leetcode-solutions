// Problem: Max Chunks To Make Sorted
// Link to the problem: https://leetcode.com/problems/max-chunks-to-make-sorted/
function maxChunksToSorted(arr: number[]): number {
    let ans: number = 0, n: number = arr.length, max: number = 0;
    for (let i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (max === i) {
            ans++;
        }
    }
    return ans;
};