// Problem: Count Days Spent Together
// Link to the problem: https://leetcode.com/problems/count-days-spent-together/
class Solution {
    fun dayOfTheYear(date: String, a: IntArray): Int {
        val x: Int = date.substring(0, 2).toInt()
        val y: Int = date.substring(3, 5).toInt()
        val ans: Int = a[x - 1] + y
        return ans
    }

    fun countDaysTogether(arriveAlice: String, leaveAlice: String, arriveBob: String, leaveBob: String): Int {
        val x: IntArray = intArrayOf(31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31)
        val y: IntArray = IntArray(13) { 0 }
        for (i: Int in 1 until 13) {
            y[i] = y[i - 1] + x[i - 1]
        }
        val a: Int = dayOfTheYear(arriveAlice, y)
        val b: Int = dayOfTheYear(leaveAlice, y)
        val c: Int = dayOfTheYear(arriveBob, y)
        val d: Int = dayOfTheYear(leaveBob, y)
        val ans: Int = max(0, min(b, d) - max(a, c) + 1)
        return ans
    }
}