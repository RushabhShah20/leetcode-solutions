// Problem: Minimum String Length After Balanced Removals
// Link to the problem: https://leetcode.com/problems/minimum-string-length-after-balanced-removals/
class Solution {
    public int minLengthAfterRemovals(String s) {
        int ans = 0;
        for (char c : s.toCharArray()) {
            ans += c == 'a' ? 1 : -1;
        }
        return Math.abs(ans);
    }
}