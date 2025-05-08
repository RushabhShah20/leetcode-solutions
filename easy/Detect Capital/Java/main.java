// Problem: Detect Capital
// Link to the problem: https://leetcode.com/problems/detect-capital/
class Solution {
    public boolean detectCapitalUse(String word) {
        boolean all_uppercase = true, all_lowercase = true;
        for (int i = 1; i < word.length(); i++) {
            if (Character.isLowerCase(word.charAt(i))) {
                all_uppercase = false;
            }
            if (Character.isUpperCase(word.charAt(i))) {
                all_lowercase = false;
            }
        }
        if (Character.isLowerCase(word.charAt(0)) && all_lowercase == true) {
            return true;
        } else if (Character.isUpperCase(word.charAt(0)) && all_uppercase == true) {
            return true;
        } else if (Character.isUpperCase(word.charAt(0)) && all_lowercase == true) {
            return true;
        } else {
            return false;
        }
    }
}