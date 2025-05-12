// Problem: Keyboard Row
// Link to the problem: https://leetcode.com/problems/keyboard-row/
class Solution {
    public String[] findWords(String[] words) {
        String first_row = "qwertyuiop";
        String second_row = "asdfghjkl";
        String third_row = "zxcvbnm";
        List<String> ans = new ArrayList<>();
        for (int i = 0; i < words.length; i++) {
            if (first_row.indexOf(Character.toLowerCase(words[i].charAt(0))) != -1) {
                boolean x = true;
                for (int j = 1; j < words[i].length(); j++) {
                    if (first_row.indexOf(Character.toLowerCase(words[i].charAt(j))) == -1) {
                        x = false;
                        break;
                    }
                }
                if (x == true) {
                    ans.add(words[i]);
                }
            } else if (second_row.indexOf(Character.toLowerCase(words[i].charAt(0))) != -1) {
                boolean x = true;
                for (int j = 1; j < words[i].length(); j++) {
                    if (second_row.indexOf(Character.toLowerCase(words[i].charAt(j))) == -1) {
                        x = false;
                        break;
                    }
                }
                if (x == true) {
                    ans.add(words[i]);
                }
            } else if (third_row.indexOf(Character.toLowerCase(words[i].charAt(0))) != -1) {
                boolean x = true;
                for (int j = 1; j < words[i].length(); j++) {
                    if (third_row.indexOf(Character.toLowerCase(words[i].charAt(j))) == -1) {
                        x = false;
                        break;
                    }
                }
                if (x == true) {
                    ans.add(words[i]);
                }
            }
        }
        return ans.toArray(new String[ans.size()]);
    }
}