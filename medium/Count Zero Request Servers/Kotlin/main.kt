// Problem: Count Zero Request Servers
// Link to the problem: https://leetcode.com/problems/count-zero-request-servers/
class Solution {
    fun countServers(n: Int, logs: Array<IntArray>, x: Int, queries: IntArray): IntArray {
        val m: Int = queries.size
        val k: Int = logs.size
        logs.sortBy { p: IntArray -> p[1] }
        val a: Array<IntArray> = Array<IntArray>(m) { i: Int -> intArrayOf(queries[i], i) }
        a.sortWith(Comparator<IntArray> { p: IntArray, q: IntArray ->
            if (p[0] != q[0]) {
                p[0].compareTo(q[0])
            } else {
                p[1].compareTo(q[1])
            }
        })
        val ans: IntArray = IntArray(m)
        val b: IntArray = IntArray(n + 1)
        var l: Int = 0
        var r: Int = 0
        var y: Int = 0
        for (i: Int in 0 until m) {
            while (r < k && logs[r][1] <= a[i][0]) {
                val c: Int = logs[r][0]
                r++
                b[c]++
                if (b[c] == 1) {
                    y++
                }
            }
            while (l < r && logs[l][1] < a[i][0] - x) {
                val c: Int = logs[l][0]
                l++
                b[c]--
                if (b[c] == 0) {
                    y--
                }
            }
            ans[a[i][1]] = n - y
        }
        return ans
    }
}