// Problem: Minimum Common Value
// Link to the problem: https://leetcode.com/problems/minimum-common-value/
class Solution {
    fun getCommon(nums1: IntArray, nums2: IntArray): Int {
        val m: Int = nums1.size
        val n: Int = nums2.size
        var i: Int = 0
        var j: Int = 0
        while (i < m && j < n) {
            when {
                nums1[i] > nums2[j] -> j++
                nums1[i] < nums2[j] -> i++
                else -> return nums1[i]
            }
        }
        return -1
    }
}