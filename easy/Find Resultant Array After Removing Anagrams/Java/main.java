// Problem: Find Resultant Array After Removing Anagrams
// Link to the problem: https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/
class Solution {
    public boolean compare(String str1, String str2) {
        if (str1.length() != str2.length()) {
            return false;
        }
        char[] char1 = str1.toCharArray();
        char[] char2 = str2.toCharArray();
        Arrays.sort(char1);
        Arrays.sort(char2);
        return Arrays.equals(char1, char2);
    }

    public List<String> removeAnagrams(String[] words) {
        int a = 0;
        List<String> v = new ArrayList<>();
        for (int i = 1; i < words.length; i++) {
            if (compare(words[a], words[i])) {
                words[i] = "1";
            } else {
                a = i;
            }
        }
        for (int i = 0; i < words.length; i++) {
            if (!words[i].equals("1")) {
                v.add(words[i]);
            }
        }
        return v;
    }
}