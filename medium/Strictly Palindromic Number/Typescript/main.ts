// Problem: Strictly Palindromic Number
// Link to the problem: https://leetcode.com/problems/strictly-palindromic-number/
function nInary(n: number, b: number): number {
    let res: number = 0;
    let mul: number = 1;
    while (n > 0) {
        res += (n % b) * mul;
        n = n / b >> 0;
        mul *= 10;
    }
    return res;
}
function isPalindrome(n: number): boolean {
    let rev = 0;
    let org = n;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n = n / 10 >> 0;
    }
    return org === rev;
}
function isStrictlyPalindromic(n: number): boolean {
    let ans: boolean = false;
    for (let i = 2; i <= n - 2; i++) {
        let num = nInary(n, i);
        if (isPalindrome(num)) {
            ans = true;
        }
        else {
            ans = false;
            break;
        }
    }
    return ans;
};