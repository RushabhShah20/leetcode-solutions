// Problem: Sort Integers by The Number of 1 Bits
// Link to the problem: https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
class Solution {
    public int setBits(int n) {
        int ans = 0;
        while (n > 0) {
            n &= (n - 1);
            ans++;
        }
        return ans;
    }

    public int[] sortByBits(int[] arr) {
        TreeMap<Integer, List<Integer>> m = new TreeMap<>();
        for (int a : arr) {
            int x = setBits(a);
            m.computeIfAbsent(x, k -> new ArrayList<>()).add(a);
        }
        for (List<Integer> list : m.values()) {
            Collections.sort(list);
        }
        List<Integer> ans = new ArrayList<>();
        for (List<Integer> list : m.values()) {
            ans.addAll(list);
        }
        return ans.stream().mapToInt(Integer::intValue).toArray();
    }
}