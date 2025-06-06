// Problem: Smallest Divisible Digit Product I
// Link to the problem: https://leetcode.com/problems/smallest-divisible-digit-product-i/
/**
 * @param {number} n
 * @param {number} t
 * @return {number}
 */
var getProduct = function (n) {
    let product = 1;
    while (n != 0) {
        product *= n % 10;
        n = (n / 10) >> 0;
    }
    return product;
};
var smallestNumber = function (n, t) {
    let ans = n;
    for (let i = n; i <= n + (10 - (n % 10)); i++) {
        if (getProduct(i) % t == 0) {
            ans = i;
            break;
        }
    }
    return ans;
};
