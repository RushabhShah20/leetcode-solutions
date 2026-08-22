// Problem: Check Divisibility by Digit Sum and Product
// Link to the problem: https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/
function checkDivisibility(n: number): boolean {
    let x: number = 0, y: number = 1, m: number = n;
    while (m > 0) {
        const z: number = m % 10;
        x += z;
        y *= z;
        m = Math.floor(m / 10);
    }
    const ans: boolean = n % (x + y) == 0;
    return ans;
};