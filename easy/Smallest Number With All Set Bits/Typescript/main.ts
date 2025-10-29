// Problem: Smallest Number With All Set Bits
// Link to the problem: https://leetcode.com/problems/smallest-number-with-all-set-bits/\
function toBinary(n: number): number[] {
    let ans: number[] = new Array();
    while (n > 0) {
        ans.push(n % 2);
        n = Math.floor(n / 2);
    }
    return ans;
}
function smallestNumber(n: number): number {
    let binary: number[] = toBinary(n);
    let a: number[] = new Array(binary.length);
    for (let i = 0; i < a.length; i++) {
        a[i] = 1;
    }
    let ans = 0;
    for (let i = 0; i < a.length; i++) {
        ans += (Math.pow(2, i) * a[i]);
    }
    return ans;
};