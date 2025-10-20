// Problem: Relative Sort Array
// Link to the problem: https://leetcode.com/problems/relative-sort-array/
class Solution {
    public int[] relativeSortArray(int[] arr1, int[] arr2) {
        Map<Integer, Integer> m = new TreeMap<>();
        for (int a : arr1) {
            m.put(a, m.getOrDefault(a, 0) + 1);
        }
        List<Integer> ans = new ArrayList<>();
        for (int i = 0; i < arr2.length; i++) {
            for (int j = 0; j < m.get(arr2[i]); j++) {
                ans.add(arr2[i]);
            }
            m.remove(arr2[i]);
        }
        for (Map.Entry<Integer, Integer> i : m.entrySet()) {
            for (int j = 0; j < i.getValue(); j++) {
                ans.add(i.getKey());
            }
        }
        return ans.stream().mapToInt(Integer::intValue).toArray();
    }
}