// Problem: Element Appearing More Than 25% In Sorted Array
// Link to the problem: https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/
function findSpecialInteger(arr: number[]): number {
    const n: number = arr.length, m: number = Math.floor(n / 4);
    for (let i = 0; i < n - m; i++) {
        if (arr[i] === arr[i + m]) {
            return arr[i];
        }
    }
    return -1;
};