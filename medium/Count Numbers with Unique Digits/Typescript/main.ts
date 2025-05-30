// Problem: Count Numbers with Unique Digits
// Link to the problem: https://leetcode.com/problems/count-numbers-with-unique-digits/
function countNumbersWithUniqueDigits(n: number): number {
    if (n === 0) {
        return 1;
    }
    if (n === 1) {
        return 10;
    }
    let total = 10;
    let current = 9;
    for (let i = 2; i <= n; ++i) {
        current *= (10 - (i - 1));
        total += current;
    }
    return total;
};