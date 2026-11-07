// Problem: Process Tasks Using Servers
// Link to the problem: https://leetcode.com/problems/process-tasks-using-servers/
class Solution {
    fun assignTasks(servers: IntArray, tasks: IntArray): IntArray {
        val m: Int = servers.size
        val n: Int = tasks.size
        val a: PriorityQueue<LongArray> = PriorityQueue<LongArray>(
            Comparator<LongArray> { p: LongArray, q: LongArray ->
                if (p[0] != q[0]) {
                    return@Comparator p[0].compareTo(q[0])
                }
                return@Comparator p[1].compareTo(q[1])
            }
        )
        val b: PriorityQueue<IntArray> = PriorityQueue<IntArray>(
            Comparator<IntArray> { p: IntArray, q: IntArray ->
                if (p[0] != q[0]) {
                    return@Comparator p[0].compareTo(q[0])
                }
                return@Comparator p[1].compareTo(q[1])
            }
        )
        for (i: Int in 0 until m) {
            b.add(intArrayOf(servers[i], i))
        }
        val ans: IntArray = IntArray(n)
        var x: Long = 0L
        for (i: Int in 0 until n) {
            x = maxOf(x, i.toLong())
            while (a.isNotEmpty() && a.peek()[0] <= x) {
                val y: LongArray = a.poll()
                val serverIndex: Int = y[1].toInt()
                b.add(intArrayOf(servers[serverIndex], serverIndex))
            }
            if (b.isEmpty()) {
                x = a.peek()[0]
                while (a.isNotEmpty() && a.peek()[0] <= x) {
                    val y: LongArray = a.poll()
                    val serverIndex: Int = y[1].toInt()
                    b.add(intArrayOf(servers[serverIndex], serverIndex))
                }
            }
            val z: IntArray = b.poll()
            ans[i] = z[1]
            a.add(longArrayOf(x + tasks[i], z[1].toLong()))
        }
        return ans
    }
}