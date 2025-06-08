// Problem: Maximum Number of Words Found in Sentences
// Link to the problem: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
class Solution {
    public int mostWordsFound(String[] sentences) {
        int[] ans = new int[sentences.length];
        Arrays.fill(ans, 1);
        for (int i = 0; i < sentences.length; i++) {
            for (int j = 0; j < sentences[i].length(); j++) {
                if (sentences[i].charAt(j) == ' ') {
                    ans[i]++;
                }
            }
        }
        return Arrays.stream(ans).max().getAsInt();
    }
}