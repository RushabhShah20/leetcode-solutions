// Problem: Binary Number with Alternating Bits
// Link to the problem: https://leetcode.com/problems/binary-number-with-alternating-bits/
function toBinary(n: number): number[] {
    let ans = new Array();
    while (n > 0) {
        ans.push(n % 2);
        n = Math.floor(n / 2);
    }
    ans.reverse();
    return ans;
}
function isAlternating(ans: number[]): boolean {
    for (let i = 0; i < ans.length; i++) {
        if (i % 2 === 0) {
            if (ans[i] === 0) {
                return false;
            }
        }
        else {
            if (ans[i] === 1) {
                return false;
            }
        }
    }
    return true;
}
function hasAlternatingBits(n: number): boolean {
    let ans = toBinary(n);
    return isAlternating(ans);
};