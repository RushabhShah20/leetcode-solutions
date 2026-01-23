// Problem: Number of Arithmetic Triplets
// Link to the problem: https://leetcode.com/problems/number-of-arithmetic-triplets/
class Solution {
    public char repeatedCharacter(String s) {
        HashMap<Character, Integer> m = new HashMap<>();
        for (final char c : s.toCharArray()) {
            m.put(c, m.getOrDefault(c, 0) + 1);
            if (m.get(c) >= 2) {
                return c;
            }
        }
        return 'a';
    }
}