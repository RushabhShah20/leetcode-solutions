// Problem: Maximum Difference Between Even and Odd Frequency I
// Link to the problem: https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i/
class Solution {
    public int maxDifference(String s) {
        int ans = 0;
        Map<Character, Integer> m = new HashMap<>();
        for (int i = 0; i < s.length(); i++) {
            m.put(s.charAt(i), m.getOrDefault(s.charAt(i), 0) + 1);
        }
        List<Integer> even = new ArrayList<>();
        List<Integer> odd = new ArrayList<>();
        for (var i : m.keySet()) {
            if (m.get(i) % 2 == 0) {
                even.add(m.get(i));
            } else {
                odd.add(m.get(i));
            }
        }
        ans = Collections.max(odd) - Collections.min(even);
        return ans;
    }
}