// Problem: Check if All A's Appears Before All B's
// Link to the problem: https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/
class Solution {
    public boolean checkString(String s) {
        boolean ans = true;
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'b') {
                ans = true;
                count = 1;
            }
            if (s.charAt(i) == 'a' && count == 1) {
                ans = false;
                break;
            }
        }
        return ans;
    }
}