// Problem: Sort Vowels in a String
// Link to the problem: https://leetcode.com/problems/sort-vowels-in-a-string/
class Solution {
    public String sortVowels(String s) {
        List<Integer> indices = new ArrayList<>();
        List<Character> alphabets = new ArrayList<>();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o'
                    || s.charAt(i) == 'u' || s.charAt(i) == 'A' || s.charAt(i) == 'E' || s.charAt(i) == 'I'
                    || s.charAt(i) == 'O' || s.charAt(i) == 'U') {
                indices.add(i);
                alphabets.add(s.charAt(i));
            }
        }
        Collections.sort(alphabets);
        char[] t = s.toCharArray();
        for (int i = 0; i < indices.size(); i++) {
            t[indices.get(i)] = alphabets.get(i);
        }
        return new String(t);
    }
};