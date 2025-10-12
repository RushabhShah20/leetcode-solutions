// Problem: Equal Score Substrings
// Link to the problem: https://leetcode.com/problems/equal-score-substrings/
class Solution {
    public boolean scoreBalance(String s) {
        int[] prefix = new int[s.length()];
        prefix[0] = (s.charAt(0) - 'a') + 1;
        for (int i = 1; i < s.length(); i++) {
            prefix[i] = prefix[i - 1] + (s.charAt(i) - 'a' + 1);
        }
        int[] suffix = new int[s.length()];
        suffix[s.length() - 1] = (s.charAt(s.length() - 1) - 'a') + 1;
        for (int i = s.length() - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + (s.charAt(i) - 'a' + 1);
        }
        for (int i = 0; i < s.length() - 1; i++) {
            if (prefix[i] == suffix[i + 1]) {
                return true;
            }
        }
        return false;
    }
}