// Problem: Weighted Word Mapping
// Link to the problem: https://leetcode.com/problems/weighted-word-mapping/
class Solution {
    public String mapWordWeights(String[] words, int[] weights) {
        final int n = words.length;
        StringBuilder ans = new StringBuilder();
        for (int i = 0; i < n; i++) {
            final int m = words[i].length();
            int sum = 0;
            for (int j = 0; j < m; j++) {
                sum += weights[words[i].charAt(j) - 'a'];
            }
            ans.append((char) ('z' - (sum % 26)));
        }
        return ans.toString();
    }
}