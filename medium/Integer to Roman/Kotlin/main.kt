// Problem: Integer to Roman
// Link to the problem: https://leetcode.com/problems/integer-to-roman/
class Solution {
    fun intToRoman(num: Int): String {
        val romanNumerals = arrayOf("M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I")
        val values = intArrayOf(1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1)
        var n = num
        val sb = StringBuilder()
        for (i in values.indices) {
            while (n >= values[i]) {
                sb.append(romanNumerals[i])
                n -= values[i]
            }
        }
        return sb.toString()
    }
}