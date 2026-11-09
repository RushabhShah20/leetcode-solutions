// Problem: Find Servers That Handled Most Number of Requests
// Link to the problem: https://leetcode.com/problems/find-servers-that-handled-most-number-of-requests/
class Solution {
    fun busiestServers(k: Int, arrival: IntArray, load: IntArray): List<Int> {
        val n: Int = arrival.size
        val a: IntArray = IntArray(k)
        val b: PriorityQueue<Int> = PriorityQueue<Int>()
        val c: PriorityQueue<IntArray> = PriorityQueue<IntArray>(
            Comparator<IntArray> { p: IntArray, q: IntArray ->
                if (p[0] != q[0]) Integer.compare(p[0], q[0]) else Integer.compare(p[1], q[1])
            }
        )
        for (i: Int in 0 until k) {
            b.add(i)
        }
        for (i: Int in 0 until n) {
            val x: Int = arrival[i]
            while (c.isNotEmpty() && c.peek()[0] <= x) {
                val y: IntArray = c.poll()
                val j: Int = ((y[1] - i) % k + k) % k + i
                b.add(j)
            }
            if (b.isNotEmpty()) {
                val j: Int = b.peek() % k
                b.poll()
                c.add(intArrayOf(x + load[i], j))
                a[j]++
            }
        }
        val ans: MutableList<Int> = ArrayList<Int>()
        var mx: Int = 0
        for (i: Int in 0 until k) {
            mx = maxOf(mx, a[i])
        }
        for (i: Int in 0 until k) {
            if (a[i] == mx) {
                ans.add(i)
            }
        }
        return ans
    }
}