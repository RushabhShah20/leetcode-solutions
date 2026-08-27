// Problem: Lexicographically Smallest Permutation Greater Than Target
// Link to the problem: https://leetcode.com/problems/lexicographically-smallest-permutation-greater-than-target/
class Solution {
    public String get(final int[] a) {
        StringBuilder ans = new StringBuilder();
        for (int i = 0; i < 26; i++) {
            ans.append(String.valueOf((char) ('a' + i)).repeat(a[i]));
        }
        return ans.toString();
    }

    public String lexGreaterPermutation(String s, String target) {
        final int n = s.length();
        int[] a = new int[26];
        for (int i = 0; i < n; i++) {
            a[s.charAt(i) - 'a']++;
            a[target.charAt(i) - 'a']--;
        }
        char[] t = target.toCharArray();
        for (int i = n - 1; i >= 0; i--) {
            final int x = t[i] - 'a';
            a[x]++;
            int mn = Integer.MAX_VALUE;
            for (int j = 0; j < 26; j++) {
                mn = Math.min(mn, a[j]);
            }
            if (mn < 0) {
                continue;
            }
            for (int j = x + 1; j < 26; j++) {
                if (a[j] > 0) {
                    a[j]--;
                    t[i] = (char) ('a' + j);
                    final String ans = new String(t, 0, i + 1) + get(a);
                    return ans;
                }
            }
        }
        return "";
    }
}