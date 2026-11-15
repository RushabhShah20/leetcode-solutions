// Problem: Number of Sub-arrays With Odd Sum
// Link to the problem: https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/
class Solution {
    fun numOfSubarrays(arr: IntArray): Int {
        val n: Int = arr.size
        var ans: Int = 0
        var x: Int = 0
        var y: Int = 1
        var z: Int = 0
        for (i: Int in 0 until n) {
            val m: Int = 1000000007
            z += arr[i]
            if ((z and 1) > 0) {
                ans = (ans + y) % m
                x++
            } else {
                ans = (ans + x) % m
                y++
            }
        }
        return ans;
    }
}