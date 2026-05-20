// Problem: Find the Prefix Common Array of Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/
function findThePrefixCommonArray(A: number[], B: number[]): number[] {
    const n: number = A.length;
    let m: number[] = new Array(n + 1).fill(0), ans: number[] = new Array(n);
    let x: number = 0;
    for (let i = 0; i < n; i++) {
        m[A[i]]++;
        if (m[A[i]] === 2) {
            x++;
        }
        m[B[i]]++;
        if (m[B[i]] === 2) {
            x++;
        }
        ans[i] = x;
    }
    return ans;
};