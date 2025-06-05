// Problem: Sum of Digits in Base K
// Link to the problem: https://leetcode.com/problems/sum-of-digits-in-base-k/
function sumBase(n: number, k: number): number {
    let sum: number = 0;
    while (n > 0) {
        sum += n % k;
        n = (n / k) >> 0;
    }
    return sum;
};