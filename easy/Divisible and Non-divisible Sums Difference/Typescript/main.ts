// Problem: Divisible and Non-divisible Sums Difference
// Link to the problem: https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/
function differenceOfSums(n: number, m: number): number {
    let suma: number = 0, sumb: number = 0;
    for (let i = 1; i <= n; i++) {
        if (i % m === 0) {
            sumb += i;
        }
        else {
            suma += i;
        }
    }
    return suma - sumb;
};