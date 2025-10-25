// Problem: Calculate Money in Leetcode Bank
// Link to the problem: https://leetcode.com/problems/calculate-money-in-leetcode-bank/
class Solution {
    fun totalMoney(n: Int): Int {
        val q :Int= n / 7;
        val r :Int= n % 7;
        var ans :Int= ((q * (q - 1)) / 2) * 7;
        ans += q * 28;
        ans += ((r * (r + 1)) / 2) + (q * r);
        return ans;
    }
}