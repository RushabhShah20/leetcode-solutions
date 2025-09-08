// Problem: Convert Integer to the Sum of Two No-Zero Integers
// Link to the problem: https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/
function isNonZero(n: number): boolean {
    while (n > 0) {
        if (n % 10 === 0) {
            return false;
        }
        n = Math.floor(n / 10);
    }
    return true;
}
function getNoZeroIntegers(n: number): number[] {
    for (let i = 1; i <= n; i++) {
        if (isNonZero(i) && isNonZero(n - i)) {
            return [i, n - i];
        }
    }
    return [];
};