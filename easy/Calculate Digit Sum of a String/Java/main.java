// Problem: Calculate Digit Sum of a String
// Link to the problem: https://leetcode.com/problems/calculate-digit-sum-of-a-string/
class Solution {
    public String digitSum(String s, int k) {
        while (s.length() > k) {
            StringBuilder t = new StringBuilder();
            final int n = s.length();
            for (int i = 0; i < n; i += k) {
                int x = 0;
                for (int j = i; j < Math.min(i + k, n); ++j) {
                    x += s.charAt(j) - '0';
                }
                t.append(x);
            }
            s = t.toString();
        }
        return s;
    }
}