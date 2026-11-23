// Problem: Product of the Last K Numbers
// Link to the problem: https://leetcode.com/problems/product-of-the-last-k-numbers/
class ProductOfNumbers {
    private a: number[];
    private n: number;
    constructor() {
        this.a = [1];
        this.n = 0;
    }

    add(num: number): void {
        if (num === 0) {
            this.a = [1];
            this.n = 0;
        } else {
            this.a.push(this.a[this.n] * num);
            this.n++;
        }
    }

    getProduct(k: number): number {
        const ans: number = k > this.n ? 0 : Math.trunc(this.a[this.n] / this.a[this.n - k]);
        return ans;
    }
}

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * var obj = new ProductOfNumbers()
 * obj.add(num)
 * var param_2 = obj.getProduct(k)
 */