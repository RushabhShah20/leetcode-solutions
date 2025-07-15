// Problem: Valid Word
// Link to the problem: https://leetcode.com/problems/valid-word/
class Solution {
    public boolean isValid(String word) {
        if (word.length() < 3) {
            return false;
        }
        boolean isVowelPresent = false, isConsonentPresent = false, isSpecialPresent = false, isDigitPresent = false;
        for (int i = 0; i < word.length(); i++) {
            char c = word.charAt(i);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o'
                    || c == 'u' || c == 'A' || c == 'E' || c == 'I'
                    || c == 'O'
                    || c == 'U') {
                isVowelPresent = true;
            } else if (c == '0' || c == '1' || c == '2' || c == '3'
                    || c == '4'
                    || c == '5' || c == '6' || c == '7' || c == '8'
                    || c == '9') {
                isDigitPresent = true;
            } else if (c == '@' || c == '#' || c == '$') {
                isSpecialPresent = true;
            } else {
                isConsonentPresent = true;
            }
        }
        if (isVowelPresent == false) {
            return false;
        }
        if (isConsonentPresent == false) {
            return false;
        }
        if (isSpecialPresent == true) {
            return false;
        }
        return true;
    }
}