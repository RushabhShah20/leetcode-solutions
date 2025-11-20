// Problem: Count Substrings Starting and Ending with Given Character
// Link to the problem: https://leetcode.com/problems/count-substrings-starting-and-ending-with-given-character/
class Solution {
    public long countSubstrings(String s, char c) {
        long m = 0;
        for (char ch : s.toCharArray()) {
            if (ch == c) {
                m++;
            }
        }
        long ans = (m * (m + 1)) / 2;
        return ans;
    }
}