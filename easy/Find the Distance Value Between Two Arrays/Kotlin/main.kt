// Problem: Find the Distance Value Between Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
class Solution {
    fun findTheDistanceValue(arr1: IntArray, arr2: IntArray, d: Int): Int {
        val n: Int = arr1.size
        val m: Int = arr2.size
        var ans: Int = 0
        for (i: Int in 0 until n) {
            var x: Boolean = true
            for (j: Int in 0 until m) {
                if (arr1[i] == arr2[j] || abs(arr1[i] - arr2[j]) <= d) {
                    x = false
                    break
                }
            }
            if (x == true) {
                ans++
            }
        }
        return ans;
    }
}