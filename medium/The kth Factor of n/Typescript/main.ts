// Problem: The kth Factor of n
// Link to the problem: https://leetcode.com/problems/the-kth-factor-of-n/
function kthFactor(n: number, k: number): number {
    let a: number[] = new Array();
    for (let i = 1; i <= n; i++) {
        if (n % i === 0) {
            a.push(i);
        }
    }
    if (a.length < k) {
        return -1;
    }
    else {
        return a[k - 1];
    }
};