// Problem: Check if a String Is an Acronym of Words
// Link to the problem: https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/
class Solution {
    public boolean isAcronym(List<String> words, String s) {
        String ans = "";
        for (int i = 0; i < words.size(); i++) {
            ans += words.get(i).charAt(0);
        }
        System.out.println(ans);
        return ans.equals(s);
    }
}