// Problem: Calculate Money in Leetcode Bank
// Link to the problem: https://leetcode.com/problems/calculate-money-in-leetcode-bank/
function totalMoney(n: number): number {
    let q: number = (n / 7) >> 0;
    let r: number = n % 7;
    let ans: number = ((((q * (q - 1)) / 2) >> 0) * 7);
    ans += q * 28;
    ans += ((((r * (r + 1)) / 2) >> 0) + (q * r));
    return ans;
};