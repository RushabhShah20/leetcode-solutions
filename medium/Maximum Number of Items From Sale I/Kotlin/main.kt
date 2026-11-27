// Problem: Maximum Number of Items From Sale I
// Link to the problem: https://leetcode.com/problems/maximum-number-of-items-from-sale-i/
class Solution {
    fun maximumSaleItems(items: Array<IntArray>, budget: Int): Int {
        val n: Int = items.size
        var a: IntArray = IntArray(budget + 1)
        var x: Int = 1000000000
        for (i: Int in 0 until n) {
            val y: Int = items[i][0]
            val z: Int = items[i][1]
            x = minOf(x, z)
            var b: Int = 0
            for (j: Int in 0 until n) {
                if (items[j][0] % y == 0) {
                    b++
                }
            }
            for (j: Int in budget downTo z) {
                a[j] = maxOf(a[j], a[j - z] + b)
            }
        }
        var ans: Int = 0
        for (i: Int in 0 until budget + 1) {
            ans = maxOf(ans, a[i] + (budget - i) / x)
        }
        return ans
    }
}