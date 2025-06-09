// Problem: Maximize Y‑Sum by Picking a Triplet of Distinct X‑Values
// Link to the problem: https://leetcode.com/problems/maximize-ysum-by-picking-a-triplet-of-distinct-xvalues/
class Solution {
    public int maxSumDistinctTriplet(int[] x, int[] y) {
        int ans = 0;
        Set<Integer> s = Arrays.stream(x).boxed().collect(Collectors.toSet());
        if (s.size() <= 2) {
            return -1;
        } else {
            Map<Integer, List<Integer>> m = new HashMap<>();
            for (int i = 0; i < x.length; i++) {
                m.computeIfAbsent(x[i], k -> new ArrayList<>()).add(y[i]);
            }
            Map<Integer, Integer> n = new HashMap<>();
            for (Map.Entry<Integer, List<Integer>> entry : m.entrySet()) {
                n.put(entry.getKey(), Collections.max(entry.getValue()));
            }
            List<Integer> z = new ArrayList<>();
            for (Map.Entry<Integer, Integer> entry : n.entrySet()) {
                z.add(entry.getValue());
            }
            for (int i = 0; i < 3; i++) {
                int maxVal = Collections.max(z);
                ans += maxVal;
                z.remove(Integer.valueOf(maxVal));
            }
            return ans;
        }
    }
}