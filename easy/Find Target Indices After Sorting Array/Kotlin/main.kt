// Problem: Find Target Indices After Sorting Array
// Link to the problem: https://leetcode.com/problems/find-target-indices-after-sorting-array/
class Solution {
    fun targetIndices(nums: IntArray, target: Int): List<Int> {
        val n: Int = nums.size
        var x: Int = 0
        var y: Int = 0
        for (i: Int in 0 until n) {
            if (nums[i] < target) {
                x++
            } else if (nums[i] == target) {
                y++
            }
        }
        val ans: MutableList<Int> = mutableListOf()
        for (i: Int in x until x + y) {
            ans.add(i)
        }
        return ans;
    }
}