// Problem: Destination City
// Link to the problem: https://leetcode.com/problems/destination-city/
class Solution {
    public String destCity(List<List<String>> paths) {
        String ans = "";
        Map<String, String> m = new HashMap<>();
        for (List<String> path : paths) {
            m.putIfAbsent(path.get(0), path.get(1));
        }
        for (Map.Entry<String, String> i : m.entrySet()) {
            if (m.get(i.getValue()) == null) {
                return i.getValue();
            }
        }
        return ans;
    }
}