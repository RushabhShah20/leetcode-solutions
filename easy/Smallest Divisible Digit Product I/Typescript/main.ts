// Problem: Smallest Divisible Digit Product I
// Link to the problem: https://leetcode.com/problems/smallest-divisible-digit-product-i/
function getProduct(n: number): number {
    let product: number = 1;
    while (n != 0) {
        product = product * (n % 10);
        n = n / 10 >> 0;
    }
    return product;
}
function smallestNumber(n: number, t: number): number {
    let ans: number = n;
    for (let i = n; i <= n + (10 - (n % 10)); i++) {
        if (getProduct(i) % t == 0) {
            ans = i;
            break;
        }
    }
    return ans;
};