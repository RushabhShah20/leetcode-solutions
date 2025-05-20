// Problem: Find Lucky Integer in an Array
// Link to the problem: https://leetcode.com/problems/find-lucky-integer-in-an-array/
class Solution {
    public int findLucky(int[] arr) {
        HashMap<Integer, Integer> m = new HashMap<>();
        for (int i = 0; i < arr.length; i++) {
            m.put(arr[i], m.getOrDefault(arr[i], 0) + 1);
        }
        List<Integer> a = new ArrayList<>();
        for (var i : m.keySet()) {
            if (m.get(i) == i) {
                a.add(m.get(i));
            }
        }
        return a.size() == 0 ? -1 : Collections.max(a);
    }
}