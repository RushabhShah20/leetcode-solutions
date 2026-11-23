// Problem: Product of the Last K Numbers
// Link to the problem: https://leetcode.com/problems/product-of-the-last-k-numbers/
class ProductOfNumbers() {
    private var a: MutableList<Int> = mutableListOf(1)
    private var n: Int = 0

    fun add(num: Int) {
        if (num == 0) {
            a = mutableListOf(1)
            n = 0
        } else {
            a.add(a[n] * num)
            n++
        }
    }

    fun getProduct(k: Int): Int {
        val ans: Int = if (k > n) 0 else a[n] / a[n - k]
        return ans
    }

}

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * var obj = ProductOfNumbers()
 * obj.add(num)
 * var param_2 = obj.getProduct(k)
 */