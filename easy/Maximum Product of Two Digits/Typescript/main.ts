// Problem: Maximum Produdct of Two Digits
// Link to the problem: https://leetcode.com/problems/maximum-product-of-two-digits/
function maxProduct(n: number): number {
    let x: number = 0, y: number = 0;
    while (n > 0) {
        const k: number = n % 10;
        if (k > x) {
            y = x;
            x = k;
        }
        else if (k > y) {
            y = k;
        }
        n = Math.floor(n / 10);
    }
    const ans: number = x * y;
    return ans;
};