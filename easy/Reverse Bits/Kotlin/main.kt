// Problem: Reverse Bits
// Link to the problem: https://leetcode.com/problems/reverse-bits/
class Solution {
    fun reverseBits(n: Int): Int {
        var ans:Int = 0;
        var m:Int = n;
        for(i in 0 until 32){
            ans = ans shl 1;
            ans = ans or(m and 1);
            m = m shr 1;
        }
        return ans
    }
}