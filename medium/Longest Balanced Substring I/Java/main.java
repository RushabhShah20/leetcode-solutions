// Problem: Longest Balanced Substring I
// Link to the problem: https://leetcode.com/problems/longest-balanced-substring-i/
class Solution {
    public boolean isBalanced(final int[] freq, final int k, final int targetFreq) {
        int count = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                if (freq[i] != targetFreq) {
                    return false;
                }
                count++;
            }
        }
        return count == k;
    }

    public int longestBalanced(String s) {
        final int n = s.length();
        int ans = 1;
        for (int i = 0; i < n; i++) {
            int[] freq = new int[26];
            int count = 0;
            for (int j = i; j < n; j++) {
                final int ch = s.charAt(j) - 'a';
                if (freq[ch] == 0) {
                    count++;
                }
                freq[ch]++;
                final int len = j - i + 1;
                if (len % count == 0) {
                    final int targetFreq = len / count;
                    if (isBalanced(freq, count, targetFreq)) {
                        ans = Math.max(ans, len);
                    }
                }
            }
        }
        return ans;
    }
}