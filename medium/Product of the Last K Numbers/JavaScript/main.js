// Problem: Product of the Last K Numbers
// Link to the problem: https://leetcode.com/problems/product-of-the-last-k-numbers/
var ProductOfNumbers = function () {
    this.a = [1];
    this.n = 0;
};

/** 
 * @param {number} num
 * @return {void}
 */
ProductOfNumbers.prototype.add = function (num) {
    if (num === 0) {
        this.a = [1];
        this.n = 0;
    } else {
        this.a.push(this.a[this.n] * num);
        this.n++;
    }
};

/** 
 * @param {number} k
 * @return {number}
 */
ProductOfNumbers.prototype.getProduct = function (k) {
    const ans = k > this.n ? 0 : Math.trunc(this.a[this.n] / this.a[this.n - k]);
    return ans;
};

/** 
 * Your ProductOfNumbers object will be instantiated and called as such:
 * var obj = new ProductOfNumbers()
 * obj.add(num)
 * var param_2 = obj.getProduct(k)
 */