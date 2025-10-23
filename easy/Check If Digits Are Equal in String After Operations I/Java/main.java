// Problem: Check If Digits Are Equal in String After Operations I
// Link to the problem: https://leetcode.com/problems/check-if-digits-are-equal-in-string-after-operations-i/
class Solution {
    public boolean hasSameDigits(String s) {
        while (s.length() != 2) {
            String t = "";
            for (int i = 0; i < s.length() - 1; i++) {
                int x = s.charAt(i) - '0';
                int y = s.charAt(i + 1) - '0';
                int z = (x + y) % 10;
                char a = (char) (z + '0');
                t += a;
            }
            s = t;
        }
        return s.charAt(0) == s.charAt(1);
    }
}