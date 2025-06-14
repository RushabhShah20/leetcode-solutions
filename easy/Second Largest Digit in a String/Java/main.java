// Problem: Second Largest Digit in a String
// Link to the problem: https://leetcode.com/problems/second-largest-digit-in-a-string/
class Solution {
    public int secondHighest(String s) {
        Set<Integer> x = new HashSet<>();
        for (int i = 0; i < s.length(); i++) {
            if (Character.isDigit(s.charAt(i))) {
                int y = s.charAt(i) - '0';
                x.add(y);
            }
        }
        if (x.size() <= 1) {
            return -1;
        } else {
            List<Integer> l = new ArrayList<>(x);
            return l.get(l.size() - 2);
        }
    }
}