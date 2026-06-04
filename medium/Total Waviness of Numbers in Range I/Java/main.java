// Problem: Total Waviness of Numbers in Range I
// Link to the problem: https://leetcode.com/problems/total-waviness-of-numbers-in-range-i/
class Solution {
    public int totalWaviness(int num1, int num2) {
        int ans = 0;
        for (int i = num1; i <= num2; i++) {
            final String x = Integer.toString(i);
            final int n = x.length();
            for (int j = 1; j < n - 1; j++) {
                if (x.charAt(j) > x.charAt(j - 1) && x.charAt(j) > x.charAt(j + 1)) {
                    ans++;
                }
                if (x.charAt(j) < x.charAt(j - 1) && x.charAt(j) < x.charAt(j + 1)) {
                    ans++;
                }
            }
        }
        return ans;
    }
}