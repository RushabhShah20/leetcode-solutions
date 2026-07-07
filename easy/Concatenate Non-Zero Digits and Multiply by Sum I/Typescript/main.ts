// Problem: Concatenate Non-Zero Digits and Multiply by Sum I
// Link to the problem: https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/
function sumAndMultiply(n: number): number {
    let x: number = 0, y: number = 0, a: number = 1;
    while (n > 0) {
        const z: number = n % 10;
        n = Math.floor(n / 10);
        if (z === 0) {
            continue;
        }
        x = z * a + x;
        y += z;
        a *= 10;
    }
    const ans: number = x * y;
    return ans;
};