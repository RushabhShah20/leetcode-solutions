// Problem: Smallest Divisible Digit Product I
// Link to the problem: https://leetcode.com/problems/smallest-divisible-digit-product-i/
class Solution {
    fun getProduct(n: Int): Int {
        var m: Int = n
        var ans: Int = 1
        while (m != 0) {
            ans = ans * (m % 10)
            m = m / 10
        }
        return ans
    }

        fun smallestNumber(n: Int, t: Int): Int {
        var ans: Int = n
        val m: Int = n + (10 - (n % 10))
        var i: Int = n
        while (i <= m) {
            val x: Int = getProduct(i)
            if (x % t == 0) {
                ans = i
                break
            }
            i++
        }
        return ans
    }
}