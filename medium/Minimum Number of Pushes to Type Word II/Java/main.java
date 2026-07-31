// Problem: Minimum Number of Pushes to Type Word II
// Link to the problem: https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/
class Solution {
    public int minimumPushes(String word) {
        final int n = word.length();
        Integer[] a = new Integer[26];
        Arrays.fill(a, 0);
        for (int i = 0; i < n; i++) {
            a[word.charAt(i) - 'a']++;
        }
        Arrays.sort(a, Collections.reverseOrder());
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            if (i < 8) {
                ans += (1 * a[i]);
            } else if (i < 16) {
                ans += (2 * a[i]);
            } else if (i < 24) {
                ans += (3 * a[i]);
            } else {
                ans += (4 * a[i]);
            }
        }
        return ans;
    }
}