// Problem: Alternating Digits Sum
// Link to the problem: https://leetcode.com/problems/alternating-digit-sum/
function split(n: number): number[] {
    let res: number[] = []
    while (n > 0) {
        res.push(n % 10);
        n = n / 10 >> 0;
    }
    return res;
}
function alternateDigitSum(n: number): number {
    let ans: number = 0;
    let digits: number[] = split(n);
    for (let i = digits.length - 1; i >= 0; i--) {
        if (digits.length % 2 == 0) {
            if (i % 2 !== 0) {
                ans += digits[i];
            } else {
                ans -= digits[i];
            }
        } else {
            if (i % 2 === 0) {
                ans += digits[i];
            } else {
                ans -= digits[i];
            }
        }
    }
    return ans;
};