// Problem: Peak Index in a Mountain Array
// Link to the problem: https://leetcode.com/problems/peak-index-in-a-mountain-array/
function peakIndexInMountainArray(arr: number[]): number {
    let start: number = 0, end: number = arr.length - 1;
    while (start < end) {
        let mid = start + Math.floor((end - start) / 2);
        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
    }
    return start;
};