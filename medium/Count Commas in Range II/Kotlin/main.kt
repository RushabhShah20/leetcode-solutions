// Problem: Count Commas in Range II
// Link to the problem: https://leetcode.com/problems/count-commas-in-range-ii/
class Solution {
    fun countCommas(n: Long): Long {
        var m: Long = n;
        var ans: Long = 0;
        var x: Long = 1000;
        while (x <= m) {
            ans += (m - x + 1);
            x *= 1000;
        }
        return ans;
    }
}