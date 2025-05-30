// Problem: Count Numbers with Unique Digits
// Link to the problem: https://leetcode.com/problems/count-numbers-with-unique-digits/
public class Solution {
    public int CountNumbersWithUniqueDigits(int n) {
        if (n == 0)
        {
            return 1;
        }
        if (n == 1)
        {
            return 10;
        }
        int total = 10;
        int current = 9;
        for (int i = 2; i <= n; ++i)
        {
            current *= (10 - (i - 1));
            total += current;
        }
        return total;
    }
}