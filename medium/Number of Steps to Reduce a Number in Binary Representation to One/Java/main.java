// Problem: Number of Steps to Reduce a Number in Binary Representation to One
// Link to the problem: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/
class Solution {
    public int numSteps(String s) {
        final int n = s.length();
        int ans = 0, x = 0;
        for (int i = n - 1; i > 0; i--) {
            final int y = s.charAt(i) - '0' + x;
            if (y % 2 == 0) {
                ans++;
            } else {
                ans += 2;
                x = 1;
            }
        }
        ans += x;
        return ans;
    }
}