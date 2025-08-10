// Problem: Reordered Power of 2
// Link to the problem: https://leetcode.com/problems/reordered-power-of-2/
class Solution {
    public boolean reorderedPowerOf2(int n) {
        List<Map<Character, Integer>> a = new ArrayList<>();
        for (int i = 0; i <= 29; i++) {
            int b = (int) Math.pow(2, i);
            String t = String.valueOf(b);
            Map<Character, Integer> y = new HashMap<>();
            for (int j = 0; j < t.length(); j++) {
                y.put(t.charAt(j), y.getOrDefault(t.charAt(j), 0) + 1);
            }
            a.add(y);
        }
        String s = String.valueOf(n);
        Map<Character, Integer> x = new HashMap<>();
        for (int i = 0; i < s.length(); i++) {
            x.put(s.charAt(i), x.getOrDefault(s.charAt(i), 0) + 1);
        }
        if (a.contains(x)) {
            return true;
        } else {
            return false;
        }
    }
}