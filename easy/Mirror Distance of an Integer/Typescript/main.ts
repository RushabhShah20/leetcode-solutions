// Problem: Mirror Distance of an Integer
// Link to the problem: https://leetcode.com/problems/mirror-distance-of-an-integer/
function rev(n: number): number {
    let ans: number = 0;
    while (n > 0) {
        ans = ans * 10 + n % 10;
        n = Math.floor(n / 10);
    }
    return ans;
}
function mirrorDistance(n: number): number {
    const m: number = rev(n), ans: number = Math.abs(m - n);
    return ans;
};