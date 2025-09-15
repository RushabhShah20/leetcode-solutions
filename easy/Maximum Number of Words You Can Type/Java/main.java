// Problem: Maximum Number of Words You Can Type
// Link to the problem: https://leetcode.com/problems/maximum-number-of-words-you-can-type/
class Solution {
    public int canBeTypedWords(String text, String brokenLetters) {
        String[] words = text.split(String.valueOf(' '));
        int ans = words.length;
        for (int i = 0; i < words.length; i++) {
            for (int j = 0; j < brokenLetters.length(); j++) {
                if (words[i].indexOf(brokenLetters.charAt(j)) != -1) {
                    ans--;
                    break;
                }
            }
        }
        return ans;
    }
}