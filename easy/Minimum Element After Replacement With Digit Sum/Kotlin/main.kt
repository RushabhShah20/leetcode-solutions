// Problem: Minimum Element After Replacement With Digit Sum
// Link to the problem: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/
class Solution {
    fun sumOfDigits(n: Int): Int {
        var sum = 0
        var num = n
        
        while (num > 0) {
            sum += num % 10
            num /= 10
        }
        
        return sum
    }
    
    fun minElement(nums: IntArray): Int {
        val digitSums = IntArray(nums.size)
        
        for (i in nums.indices) {
            digitSums[i] = sumOfDigits(nums[i])
        }
        
        return digitSums.minOrNull() ?: 0
    }
}