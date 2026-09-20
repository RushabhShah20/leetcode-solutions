// Problem: Reverse Degree of a String
// Link to the problem: https://leetcode.com/problems/reverse-degree-of-a-string/
class Solution {
    public int reverseDegree(String s) {
        final int n = s.length();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += (26 - (s.charAt(i) - 'a')) * (i + 1);
        }
        return ans;
    }
}