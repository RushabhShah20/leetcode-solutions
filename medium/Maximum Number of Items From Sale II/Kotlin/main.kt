// Problem: Maximum Number of Items From Sale II
// Link to the problem: https://leetcode.com/problems/maximum-number-of-items-from-sale-ii/
class Solution {
    fun maximumSaleItems(items: Array<IntArray>, budget: Int): Int {
        var remaining: Int = budget
        val n: Int = items.size
        items.sortWith(Comparator { p: IntArray, q: IntArray -> p[1].compareTo(q[1]) })
        var mx: Int = 0
        for (i: Int in 0 until n) {
            mx = maxOf(mx, items[i][0])
        }
        val a: IntArray = IntArray(mx + 1)
        for (i: Int in 0 until n) {
            a[items[i][0]]++
        }
        for (i: Int in 1..mx) {
            if (a[i] > 0) {
                for (j: Int in (i shl 1)..mx step i) {
                    a[i] += a[j]
                }
            }
        }
        val mn: Int = items[0][1]
        var ans: Int = 0
        for (i: Int in 0 until n) {
            val x: Int = items[i][0]
            val y: Int = items[i][1]
            if (y - mn > mn) {
                break
            }
            val b: Int = a[x] - 1
            val c: Int = minOf(b, remaining / y)
            ans += c shl 1
            remaining -= c * y
        }
        ans += remaining / mn
        return ans
    }
}