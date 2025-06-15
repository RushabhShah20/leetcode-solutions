// Problem: Determine if String Halves Are Alike
// Link to the problem: https://leetcode.com/problems/determine-if-string-halves-are-alike/
class Solution {
    public boolean halvesAreAlike(String s) {
        int vowelsFirstHalf = 0, vowelsSecondHalf = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i < s.length() / 2) {
                if (s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o'
                        || s.charAt(i) == 'u' || s.charAt(i) == 'A'
                        || s.charAt(i) == 'E' || s.charAt(i) == 'I' || s.charAt(i) == 'O' || s.charAt(i) == 'U') {
                    vowelsFirstHalf++;
                }
            } else {
                if (s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o'
                        || s.charAt(i) == 'u' || s.charAt(i) == 'A'
                        || s.charAt(i) == 'E' || s.charAt(i) == 'I' || s.charAt(i) == 'O' || s.charAt(i) == 'U') {
                    vowelsSecondHalf++;
                }
            }
        }
        return vowelsFirstHalf == vowelsSecondHalf;
    }
}