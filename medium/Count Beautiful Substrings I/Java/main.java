// Problem: Count Beautiful Substrings I
// Link to the problem: https://leetcode.com/problems/count-beautiful-substrings-i/
class Solution {
    public int beautifulSubstrings(String s, int k) {
        int ans = 0, n = s.length();
        for (int i = 0; i < n; i++) {
            int vowels = 0, consonents = 0;
            for (int j = i; j < n; j++) {
                if (s.charAt(j) == 'a' || s.charAt(j) == 'e' || s.charAt(j) == 'i' || s.charAt(j) == 'o'
                        || s.charAt(j) == 'u') {
                    vowels++;
                } else {
                    consonents++;
                }
                if ((vowels == consonents) && (vowels * consonents) % k == 0) {
                    ans++;
                }
            }
        }
        return ans;
    }
}