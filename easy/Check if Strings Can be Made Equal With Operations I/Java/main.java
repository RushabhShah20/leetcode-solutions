// Problem: Check if Strings Can be Made Equal With Operations I
// Link to the problem: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-i/
class Solution {
    public boolean canBeEqual(String s1, String s2) {
        final boolean x = (s1.charAt(0) == s2.charAt(0) && s1.charAt(2) == s2.charAt(2))
                || (s1.charAt(0) == s2.charAt(2) && s1.charAt(2) == s2.charAt(0));
        final boolean y = (s1.charAt(1) == s2.charAt(1) && s1.charAt(3) == s2.charAt(3))
                || (s1.charAt(1) == s2.charAt(3) && s1.charAt(3) == s2.charAt(1));
        final boolean ans = x && y;
        return ans;
    }
}