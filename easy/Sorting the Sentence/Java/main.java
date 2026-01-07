// Problem: Sorting the Sentence
// Link to the problem: https://leetcode.com/problems/sorting-the-sentence/
class Solution {
    public String sortSentence(String s) {
        String[] words = s.split(" ");
        String[] ans = new String[words.length];
        for (final String word : words) {
            int i = word.charAt(word.length() - 1) - '1';
            ans[i] = word.substring(0, word.length() - 1);
        }
        return String.join(" ", ans);
    }
}