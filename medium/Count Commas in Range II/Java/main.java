// Problem: Count Commas in Range II
// Link to the problem: https://leetcode.com/problems/count-commas-in-range-ii/
class Solution {
    public long countCommas(long n) {
        long ans = 0, x = 1000;
        while (x <= n) {
            ans += (n - x + 1);
            x *= 1000;
        }
        return ans;
    }
}