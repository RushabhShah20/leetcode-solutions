// Problem: Find Most Frequent Vowel And Consonant
// Link to the problem: https://leetcode.com/problems/find-most-frequent-vowel-and-consonant
class Solution {
    public int maxFreqSum(String s) {
        HashMap<Character, Integer> vowels = new HashMap<>();
        HashMap<Character, Integer> consonents = new HashMap<>();
        int max_vowels = 0, max_consonents = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o'
                    || s.charAt(i) == 'u') {
                vowels.put(s.charAt(i), vowels.getOrDefault(s.charAt(i), 0) + 1);
            } else {
                consonents.put(s.charAt(i), consonents.getOrDefault(s.charAt(i), 0) + 1);
            }
        }
        for (var i : vowels.keySet()) {
            if (vowels.get(i) > max_vowels) {
                max_vowels = vowels.get(i);
            }
        }
        for (var i : consonents.keySet()) {
            if (consonents.get(i) > max_consonents) {
                max_consonents = consonents.get(i);
            }
        }
        return max_vowels + max_consonents;
    }
}