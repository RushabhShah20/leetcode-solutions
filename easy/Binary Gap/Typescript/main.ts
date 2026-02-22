// Problem: Binary Gap
// Link to the problem: https://leetcode.com/problems/binary-gap/
function binaryGap(n: number): number {
    let ans: number = 0, x: number = 0, y: number = -1;
    while (n > 0) {
        if (n % 2 === 1) {
            if (y !== -1) {
                ans = Math.max(ans, x - y);
            }
            y = x;
        }
        n = Math.floor(n / 2);
        x++;
    }
    return ans;
};